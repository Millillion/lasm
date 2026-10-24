// release.yml, after publication: the getting-started path from the registry, in
// a clean directory with empty npm and Lasm caches and no npm configuration but
// the registry: npm create lasm@<version> app -- --template hono, npm install,
// npm run build, the server, and HTTP requests (docs/RELEASING.md).
//
//   node scripts/release/verify-create.mjs --registry https://registry.npmjs.org/ --version V --work NEW_DIR [--report FILE]
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { spawnSync, spawn } from 'node:child_process';
import { mkdirSync, writeFileSync, readFileSync, existsSync, appendFileSync } from 'node:fs';
import { createServer } from 'node:net';
import { join, resolve, dirname } from 'node:path';
import { findNpm } from '../../src/npm-artifacts.mjs';
import { published, summary } from './lib.mjs';
import { setTimeout as delay } from 'node:timers/promises';

const { values: args } = parseArgs({ options: { registry: { type: 'string' }, version: { type: 'string' }, work: { type: 'string' },
  report: { type: 'string' } } });
assert.ok(args.registry && args.version && args.work, 'Usage: verify-create.mjs --registry URL --version V --work NEW_DIR');
const registry = new URL(args.registry).href, version = args.version, work = resolve(args.work);
assert.ok(!existsSync(work), `Use a new work directory: ${work}`);
mkdirSync(work, { recursive: true });
const npm = findNpm(); assert.ok(npm, 'npm was not found');
const npmCli = npm.args[0] ?? npm.command, log = join(work, 'verify-create.log');

const env = { ...process.env };
for (const key of Object.keys(env)) if (/^(?:npm_|NPM_|LASM_|NODE_AUTH_TOKEN$|NODE_OPTIONS$)/.test(key)) delete env[key];
writeFileSync(join(work, 'npmrc'), `registry=${registry}\n`);
Object.assign(env, { npm_config_userconfig: join(work, 'npmrc'), npm_config_registry: registry, npm_config_cache: join(work, 'npm-cache'),
  npm_config_update_notifier: 'false', npm_config_audit: 'false', npm_config_fund: 'false', LASM_TOOLCHAIN_CACHE: join(work, 'lasm-cache') });
function npmRun(label, npmArgs, cwd) {
  const started = Date.now();
  const result = spawnSync(process.execPath, [npmCli, ...npmArgs], { cwd, env, encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true, timeout: 3_600_000 });
  const seconds = (Date.now() - started) / 1000;
  appendFileSync(log, `\n=== ${label} (${seconds}s, exit ${result.status ?? result.signal})\n$ npm ${npmArgs.join(' ')}\n--- stdout\n${result.stdout}\n--- stderr\n${result.stderr}\n`);
  if (result.error) throw result.error;
  assert.equal(result.status, 0, `${label} failed (see ${log}):\n${(result.stderr ?? '').slice(-3000)}`);
  console.log(`${label}: ${seconds}s`);
  return seconds;
}

// The registry serves both packages (the public registry's metadata can lag behind a publish).
for (const name of ['@lasm/cli', 'create-lasm']) {
  let state;
  for (let attempt = 0; attempt < 60 && !(state = await published(registry, name, version)).exists; attempt++) await delay(10_000);
  assert.ok(state.exists, `${name}@${version} is not on ${registry}`);
}
const report = { schema: 1, registry, version, startedAt: new Date().toISOString(), node: process.versions.node };
report.create = npmRun('npm create lasm', ['create', '--yes', `lasm@${version}`, 'app', '--', '--template', 'hono'], work);
const app = join(work, 'app');
const manifest = JSON.parse(readFileSync(join(app, 'package.json'), 'utf8'));
assert.deepEqual(manifest.devDependencies, { '@lasm/cli': version }, 'create-lasm scaffolds with the released CLI');
report.install = npmRun('npm install', ['install'], app);
report.build = npmRun('npm run build', ['run', 'build'], app);
const port = await new Promise((done, fail) => {
  const server = createServer().once('error', fail);
  server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
});
const child = spawn(process.execPath, [join(app, 'dist', 'main.mjs')], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'], windowsHide: true,
  env: { ...env, HOST: '127.0.0.1', PORT: String(port) } });
let serverOutput = '';
const exited = new Promise(done => child.once('exit', done));
try {
  await new Promise((done, fail) => {
    const timer = setTimeout(() => fail(new Error(`The server did not start within 120 s:\n${serverOutput}`)), 120_000);
    const check = text => { serverOutput += text; if (/Listening on http:\/\/127\.0\.0\.1:\d+/.test(serverOutput)) { clearTimeout(timer); done(); } };
    child.stdout.setEncoding('utf8').on('data', check); child.stderr.setEncoding('utf8').on('data', check);
    child.once('exit', code => { clearTimeout(timer); fail(new Error(`The server exited (${code}):\n${serverOutput}`)); });
  });
  report.requests = [];
  for (const [path, expected] of [['/', { message: 'Hello from Lean on Hono!' }], ['/hello/Ada', { message: 'Hello, Ada, from Lean!' }], ['/health', { ok: true }]]) {
    const response = await fetch(`http://127.0.0.1:${port}${path}`, { signal: AbortSignal.timeout(30_000) });
    const body = await response.text();
    assert.equal(response.status, 200, `${path}: ${body}`);
    assert.deepEqual(JSON.parse(body), expected, path);
    report.requests.push({ path, status: response.status, body });
  }
} finally {
  if (child.exitCode === null) child.kill('SIGTERM');
  await Promise.race([exited, delay(15_000)]);
  if (child.exitCode === null) child.kill('SIGKILL');
  appendFileSync(log, `\n=== server output\n${serverOutput}\n`);
}
report.finishedAt = new Date().toISOString();
if (args.report) { mkdirSync(dirname(resolve(args.report)), { recursive: true }); writeFileSync(resolve(args.report), JSON.stringify(report, null, 2) + '\n'); }
summary(`### Verified from ${registry}\n\n\`npm create lasm@${version} app -- --template hono\` (${report.create}s), npm install (${report.install}s), npm run build (${report.build}s), server: ` +
  report.requests.map(r => `\`${r.path}\` ${r.status}`).join(', '));
