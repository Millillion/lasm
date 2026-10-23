// Builds and runs the Lasm.JS examples with an installed Lasm package (the
// candidate tarball): examples/js-crud on Express and on Hono (Postgres via pg,
// JWT via jose) and examples/js-fetch against a local HTTP server.
//   node run-examples.mjs CANDIDATE_TGZ WORK_DIR RESULT.json
// DATABASE_URL must name a Postgres server; POSTGRES_KIND says what it is.
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, writeFileSync } from 'node:fs';
import http from 'node:http';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [tgzArg, workArg, resultArg] = process.argv.slice(2);
assert.ok(tgzArg && workArg && resultArg && process.env.DATABASE_URL, 'Usage: DATABASE_URL=… node run-examples.mjs CANDIDATE_TGZ WORK_DIR RESULT.json');
const tgz = resolve(tgzArg), work = resolve(workArg), resultFile = resolve(resultArg);
assert.ok(!existsSync(work), 'Use a new work directory');
const result = { platform: `${process.platform}-${process.arch}`, node: process.version, candidate: tgz,
  postgres: process.env.POSTGRES_KIND ?? 'unspecified', startedAt: new Date().toISOString(), steps: [], apps: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const npmCli = process.platform === 'win32' ? [process.execPath, join(dirname(process.execPath), 'node_modules/npm/bin/npm-cli.js')]
  : [join(dirname(process.execPath), 'npm')];
const npxCli = process.platform === 'win32' ? [process.execPath, join(dirname(process.execPath), 'node_modules/npm/bin/npx-cli.js')]
  : [join(dirname(process.execPath), 'npx')];
function run(label, [command, ...base], args, cwd) {
  const started = performance.now();
  const r = spawnSync(command, [...base, ...args], { cwd, encoding: 'utf8', timeout: 3600_000, maxBuffer: 64 * 1024 * 1024,
    env: { ...process.env, npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' } });
  const step = { label, args, code: r.status, seconds: Math.round((performance.now() - started) / 100) / 10,
    stdout: r.stdout?.slice(-4000), stderr: r.stderr?.slice(-8000), error: r.error?.message };
  result.steps.push(step); save();
  assert.equal(r.status, 0, `${label} failed: ${r.stderr?.slice(-4000)}`);
  return r;
}
try {
  mkdirSync(work, { recursive: true });
  const crud = join(work, 'crud app'), fetchApp = join(work, 'fetch app');
  cpSync(join(root, 'examples/js-crud'), crud, { recursive: true, filter: f => !f.split(/[\\/]/).some(p => ['node_modules', 'dist', '.lake'].includes(p)) });
  cpSync(join(root, 'examples/js-fetch'), fetchApp, { recursive: true, filter: f => !f.split(/[\\/]/).some(p => ['dist', '.lake'].includes(p)) });
  run('npm install (example dependencies)', npmCli, ['install'], crud);
  // Lasm is a build tool: a devDependency, never deployed.
  run('npm install -D Lasm candidate', npmCli, ['install', '-D', tgz], crud);
  for (const app of ['Express', 'Hono']) {
    const output = join(crud, `dist ${app}`);
    run(`lasm build ${app}.lean`, npxCli, ['lasm', 'build', `${app}.lean`, '--output', output], crud);
    assert.ok(existsSync(join(output, 'node_modules', app === 'Express' ? 'express' : 'hono', 'package.json')));
    assert.ok(!existsSync(join(output, 'node_modules/@lasm')), 'Lasm itself is not deployed');
    const check = spawnSync(process.execPath, [join(root, 'scripts/js-interop/check-crud.mjs'), output, app], { encoding: 'utf8', timeout: 300_000 });
    const line = check.stdout.trim().split('\n').pop();
    result.apps.push(line?.startsWith('{') ? JSON.parse(line) : { app, ok: false, stdout: check.stdout, stderr: check.stderr }); save();
    assert.equal(check.status, 0, `${app}: ${check.stdout}${check.stderr}`);
  }
  // Outbound HTTP with Node's fetch, against a local server.
  run('npm install -D Lasm candidate (fetch)', npmCli, ['install', '-D', tgz], fetchApp);
  run('lasm build js-fetch', npxCli, ['lasm', 'build', 'Main.lean', '--output', 'dist'], fetchApp);
  const server = http.createServer((req, res) => { res.writeHead(200, { 'content-type': 'application/json' }); res.end(JSON.stringify({ path: req.url })); });
  await new Promise(done => server.listen(0, '127.0.0.1', done));
  const url = `http://127.0.0.1:${server.address().port}/hello`;
  const child = spawn(process.execPath, [join(fetchApp, 'dist/main.mjs'), url], { stdio: ['ignore', 'pipe', 'pipe'] });
  let out = '', err = '';
  child.stdout.on('data', b => { out += b; }); child.stderr.on('data', b => { err += b; });
  const code = await new Promise(done => child.on('close', done));
  server.close();
  result.fetch = { url, code, stdout: out, stderr: err }; save();
  assert.equal(code, 0, err); assert.equal(out, `200 application/json ${JSON.stringify({ path: '/hello' }).length} characters\n`);
  result.passed = true;
} catch (error) {
  result.passed = false; result.error = error.stack;
  save();
  throw error;
} finally { result.finishedAt = new Date().toISOString(); save(); }
console.log(JSON.stringify({ passed: result.passed, apps: result.apps.map(a => ({ app: a.app, ok: a.ok, rps: a.load?.rps })), fetch: result.fetch?.code }, null, 2));
