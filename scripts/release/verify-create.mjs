// release.yml, after publication: the getting-started path from the registry, in
// a clean directory with empty npm and Lasm caches and no npm configuration but
// the registry: npm create @lasm@<version> app -- --template hono, npm install,
// npm run build, the server, and HTTP requests (docs/RELEASING.md).
//
//   node scripts/release/verify-create.mjs --registry https://registry.npmjs.org/ --version V --work NEW_DIR [--report FILE] [--stage S] [--template T]
// --template hono (default; release.yml), web (the static browser build, served from
// dist/) or fullstack (npm start: the server rendering the first page, with the
// browser app); published-templates.yml runs all three after a release.
// --stage create|warm|build|serve runs one part (default all), so that each can run in
// its own resource guard: the guard counts page cache, and a fresh extraction of every
// tool plus the build exceeded a CI runner's budget in one guard. `warm` builds a hello
// program with the app's installed CLI and the same empty-at-start Lasm cache first.
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
  report: { type: 'string' }, stage: { type: 'string', default: 'all' }, template: { type: 'string', default: 'hono' } } });
assert.ok(args.registry && args.version && args.work, 'Usage: verify-create.mjs --registry URL --version V --work NEW_DIR');
const registry = new URL(args.registry).href, version = args.version, work = resolve(args.work);
const stage = args.stage, does = name => stage === 'all' || stage === name, template = args.template;
assert.ok(['hono', 'web', 'fullstack'].includes(template), `Unknown template ${template}`);
assert.ok(['all', 'create', 'warm', 'build', 'serve'].includes(stage), `Unknown stage ${stage}`);
if (does('create')) { assert.ok(!existsSync(work), `Use a new work directory: ${work}`); mkdirSync(work, { recursive: true }); }
else assert.ok(existsSync(join(work, 'state.json')), 'Run the create stage first');
const npm = findNpm(); assert.ok(npm, 'npm was not found');
const npmCli = npm.args[0] ?? npm.command, log = join(work, 'verify-create.log');

const env = { ...process.env };
for (const key of Object.keys(env)) if (/^(?:npm_|NPM_|LASM_|NODE_AUTH_TOKEN$|NODE_OPTIONS$)/.test(key)) delete env[key];
writeFileSync(join(work, 'npmrc'), `registry=${registry}\n`);
Object.assign(env, { npm_config_userconfig: join(work, 'npmrc'), npm_config_registry: registry, npm_config_cache: join(work, 'npm-cache'),
  npm_config_update_notifier: 'false', npm_config_audit: 'false', npm_config_fund: 'false', LASM_TOOLCHAIN_CACHE: join(work, 'lasm-cache') });
function npmRun(label, npmArgs, cwd) { return nodeRun(label, [npmCli, ...npmArgs], cwd); }
function nodeRun(label, nodeArgs, cwd) {
  const started = Date.now(), npmArgs = nodeArgs.slice(1);
  const result = spawnSync(process.execPath, nodeArgs, { cwd, env, encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true, timeout: 3_600_000 });
  const seconds = (Date.now() - started) / 1000;
  appendFileSync(log, `\n=== ${label} (${seconds}s, exit ${result.status ?? result.signal})\n$ npm ${npmArgs.join(' ')}\n--- stdout\n${result.stdout}\n--- stderr\n${result.stderr}\n`);
  if (result.error) throw result.error;
  assert.equal(result.status, 0, `${label} failed (see ${log}):\n${(result.stderr ?? '').slice(-3000)}`);
  console.log(`${label}: ${seconds}s`);
  return seconds;
}

const app = join(work, 'app'), stateFile = join(work, 'state.json');
const report = does('create') ? { schema: 1, registry, version, startedAt: new Date().toISOString(), node: process.versions.node }
  : JSON.parse(readFileSync(stateFile, 'utf8'));
const save = () => writeFileSync(stateFile, JSON.stringify(report, null, 2) + '\n');
if (does('create')) {
  // The registry serves both packages (the public registry's metadata can lag behind a publish).
  for (const name of ['@lasm/cli', '@lasm/create']) {
    let state;
    for (let attempt = 0; attempt < 60 && !(state = await published(registry, name, version)).exists; attempt++) await delay(10_000);
    assert.ok(state.exists, `${name}@${version} is not on ${registry}`);
  }
  report.create = npmRun('npm create @lasm', ['create', '--yes', `@lasm@${version}`, 'app', '--', '--template', template], work);
  const manifest = JSON.parse(readFileSync(join(app, 'package.json'), 'utf8'));
  assert.deepEqual(manifest.devDependencies, { '@lasm/cli': version }, '@lasm/create scaffolds with the released CLI');
  report.install = npmRun('npm install', ['install'], app);
  save();
}
if (does('warm')) {
  const warm = join(work, 'warm');
  mkdirSync(warm, { recursive: true });
  writeFileSync(join(warm, 'Main.lean'), 'def main : IO Unit := IO.println "warm"\n');
  writeFileSync(join(warm, 'lean-toolchain'), readFileSync(join(app, 'lean-toolchain')));
  report.warm = nodeRun('lasm build (warm the tool cache)', [join(app, 'node_modules', '@lasm', 'cli', 'bin', 'lasm.mjs'), 'build', 'Main.lean'], warm);
  save();
}
if (does('build')) { report.build = npmRun('npm run build', ['run', 'build'], app); save(); }
if (!does('serve')) process.exit(0);
const port = await new Promise((done, fail) => {
  const server = createServer().once('error', fail);
  server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
});
// web: a static host for dist/ (the loader, the Wasm and index.html).
let staticServer;
if (template === 'web') {
  const { createServer: createHttpServer } = await import('node:http');
  const types = { '.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.wasm': 'application/wasm', '.json': 'application/json' };
  staticServer = createHttpServer((request, response) => {
    const path = decodeURIComponent(new URL(request.url, 'http://x').pathname);
    const file = join(app, 'dist', path.endsWith('/') ? path + 'index.html' : path);
    if (!file.startsWith(join(app, 'dist')) || !existsSync(file)) { response.writeHead(404).end(); return; }
    response.writeHead(200, { 'content-type': types[file.slice(file.lastIndexOf('.'))] ?? 'application/octet-stream' }).end(readFileSync(file));
  });
  await new Promise(done => staticServer.listen(port, '127.0.0.1', done));
}
const child = template === 'web' ? spawn(process.execPath, ['-e', 'console.log("Listening on http://127.0.0.1:0 (static)"); setInterval(() => {}, 1000)'], { stdio: ['ignore', 'pipe', 'pipe'] })
  : spawn(process.execPath, [join(app, 'dist', ...(template === 'fullstack' ? ['server', 'main.mjs'] : ['main.mjs']))], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'], windowsHide: true,
  env: { ...env, HOST: '127.0.0.1', PORT: String(port) } });
let serverOutput = '';
const exited = new Promise(done => child.once('exit', done));
try {
  await new Promise((done, fail) => {
    const timer = setTimeout(() => fail(new Error(`The server did not start within 120 s:\n${serverOutput}`)), 120_000);
    const check = text => { serverOutput += text; if (/Listening on http:\/\/(?:127\.0\.0\.1|localhost|0\.0\.0\.0):\d+/.test(serverOutput)) { clearTimeout(timer); done(); } };
    child.stdout.setEncoding('utf8').on('data', check); child.stderr.setEncoding('utf8').on('data', check);
    child.once('exit', code => { clearTimeout(timer); fail(new Error(`The server exited (${code}):\n${serverOutput}`)); });
  });
  report.requests = [];
  const get = async path => {
    const response = await fetch(`http://127.0.0.1:${port}${path}`, { signal: AbortSignal.timeout(30_000) });
    const body = await response.text();
    assert.equal(response.status, 200, `${path}: ${body.slice(0, 500)}`);
    report.requests.push({ path, status: response.status, body: body.slice(0, 200) });
    return body;
  };
  if (template === 'hono')
    for (const [path, expected] of [['/', { message: 'Hello from Lean on Hono!' }], ['/hello/Ada', { message: 'Hello, Ada, from Lean!' }], ['/health', { ok: true }]])
      assert.deepEqual(JSON.parse(await get(path)), expected, path);
  if (template === 'fullstack') assert.ok((await get('/')).includes('<li'), 'the server renders the todo list');
  if (template === 'web') {
    assert.match(await get('/'), /<html/i);
    // Every file the build manifest names as entry or Wasm is served.
    const manifest = JSON.parse(await get('/lasm-manifest.json'));
    for (const file of [manifest.entry, manifest.wasm].flat().filter(value => typeof value === 'string')) await get('/' + file.replace(/^\.?\//, ''));
  }
} finally {
  if (child.exitCode === null) child.kill('SIGTERM');
  await Promise.race([exited, delay(15_000)]);
  if (child.exitCode === null) child.kill('SIGKILL');
  staticServer?.close();
  appendFileSync(log, `\n=== server output\n${serverOutput}\n`);
}
report.finishedAt = new Date().toISOString();
if (args.report) { mkdirSync(dirname(resolve(args.report)), { recursive: true }); writeFileSync(resolve(args.report), JSON.stringify(report, null, 2) + '\n'); }
summary(`### Verified from ${registry}\n\n\`npm create @lasm@${version} app -- --template ${template}\` (${report.create}s), npm install (${report.install}s), npm run build (${report.build}s), server: ` +
  report.requests.map(r => `\`${r.path}\` ${r.status}`).join(', '));
