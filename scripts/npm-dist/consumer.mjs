// Consumer validation of Lasm's npm packages against a private loopback registry
// (docs/TOOLCHAIN_SLIMMING.md, Phase 3). Every Node process (npm, npx, Lasm, its
// build worker, the application) runs with scripts/npm-dist/network-audit.cjs,
// which records each HTTP(S) request and blocks every non-loopback one, and Lasm
// runs with LASM_ARTIFACT_SOURCE=npm, so no tool can come from a GitHub download.
//
//   node scripts/npm-dist/consumer.mjs --registry URL --dist BUILD_DIR --work DIR --scenario NAME
// Scenarios:
//   installed      npm install @lasm/cli@V in an empty project, then npx lasm Main.lean (empty Lasm cache)
//   lake           a Lake project in the `installed` project (extended Lean tier fetched on demand; no Git: the project has no dependencies)
//   npx            npx --yes @lasm/cli@V Main.lean in an empty directory (empty npm and Lasm caches)
//   c-tier         a Lake project with bundled C (scripts/ecosystem/projects/extern-lib) in the `installed`
//                  project: Lean's C tier must come from @lasm/lean-c-<platform>, fetched on demand
//   init           npx --yes @lasm/cli@V init app --template plain, then npm install, npm run build, node dist/main.mjs
//   create         npm create @lasm@V app -- --template hono, then npm install, npm run build, the server and HTTP
//                  requests (registry.mjs publish --mirror-template hono supplies hono and @hono/node-server)
//   omit-optional  npm install --omit=optional: Lasm must fail with the exact fix; the fix must repair it
//   foreign-lock   lockfile created for another OS (npm --os/--cpu), then npm ci on this host
//   edge           in the `installed` project: examples/edge-pure built for every edge target and for Bun and
//                  Deno (lasm build --target …) from the edge runtime bundled in @lasm/cli (no download, no receipt)
//   launch-web|-fetch|-fastify|-fullstack (one process each: the resource guard counts page cache)
//                  0.3.0's pieces from the installed package, in the `installed` caches: templates web
//                  (--target browser), fetch (served; --target wasi|fastly|wasi-http), fastify and fullstack
//                  (served), the Vite plugin (@lasm/cli/vite, vite build) and `lasm editor` with Lean
//                  already cached (a stub elan records the link; no download, network audit on)
//   pnpm           pnpm add @lasm/cli@V (--pnpm path to the pnpm CLI script); package resolution only
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { spawnSync, spawn } from 'node:child_process';
import { mkdirSync, writeFileSync, readFileSync, existsSync, readdirSync, rmSync, appendFileSync, statSync, cpSync } from 'node:fs';
import { createServer } from 'node:net';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { findNpm } from '../../src/npm-artifacts.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
/** The Vite version the browser CI and the launch scenario use (registry.mjs mirrors it). */
const viteVersion = '8.3.5';
const { values: args } = parseArgs({ options: { registry: { type: 'string' }, dist: { type: 'string' }, work: { type: 'string' },
  scenario: { type: 'string' }, pnpm: { type: 'string' } } });
assert.ok(args.registry && args.dist && args.work && args.scenario, 'Usage: consumer.mjs --registry URL --dist BUILD_DIR --work DIR --scenario NAME');
const registry = new URL(args.registry).href;
assert.ok(['127.0.0.1', 'localhost'].includes(new URL(registry).hostname), 'Use the loopback validation registry');
const record = JSON.parse(readFileSync(join(resolve(args.dist), 'npm-dist.json'), 'utf8'));
const work = resolve(args.work), host = `${process.platform}-${process.arch}`;
const spec = `${record.main.name}@${record.main.version}`;
const audit = join(work, `network-${args.scenario}.jsonl`), log = join(work, `${args.scenario}.log`);
mkdirSync(work, { recursive: true });
const npm = findNpm();
assert.ok(npm, 'npm was not found');
const npmCli = npm.args[0] ?? npm.command;
const npxCli = join(dirname(npmCli), 'npx-cli.js');

// Empty npm and Lasm caches per scenario; the Lake scenario continues the installed project,
// and init reuses its caches (a fresh extraction of every tool again filled the guard's
// budget with page cache on the 6 GiB Linux setting; empty caches are covered by installed and npx).
const cacheName = ['lake', 'c-tier', 'edge', 'launch-web', 'launch-fetch', 'launch-fastify', 'launch-fullstack', 'init', 'create'].includes(args.scenario) ? 'installed' : args.scenario;
const preload = join(root, 'scripts/npm-dist/network-audit.cjs');
function environment(extra = {}) {
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:npm_|NPM_|LASM_)/.test(key)) delete env[key];
  // A private npm configuration: only the loopback registry, a scenario npm cache.
  const userconfig = join(work, 'npmrc');
  writeFileSync(userconfig, `registry=${registry}\n`);
  return { ...env, npm_config_userconfig: userconfig, npm_config_registry: registry, npm_config_cache: join(work, `npm-cache-${cacheName}`),
    npm_config_update_notifier: 'false', npm_config_audit: 'false', npm_config_fund: 'false',
    LASM_TOOLCHAIN_CACHE: join(work, `lasm-cache-${cacheName}`), LASM_ARTIFACT_SOURCE: 'npm', LASM_NETWORK_AUDIT: audit,
    NODE_OPTIONS: `--require ${preload.includes(' ') ? JSON.stringify(preload) : preload}`, ...extra };
}
function run(label, command, commandArgs, { cwd, env = environment(), expectFailure = false } = {}) {
  const started = Date.now();
  const result = spawnSync(command, commandArgs, { cwd, env, encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true, timeout: 3_600_000 });
  const seconds = (Date.now() - started) / 1000;
  appendFileSync(log, `\n=== ${label} (${seconds}s, exit ${result.status ?? result.signal})\n$ ${commandArgs.join(' ')}\n--- stdout\n${result.stdout}\n--- stderr\n${result.stderr}\n`);
  if (result.error) throw result.error;
  if (expectFailure) assert.notEqual(result.status, 0, `${label} unexpectedly succeeded`);
  else assert.equal(result.status, 0, `${label} failed (see ${log}):\n${(result.stderr ?? '').slice(-3000)}`);
  console.log(`${label}: exit ${result.status} in ${seconds}s`);
  return { ...result, seconds };
}
const npmRun = (label, npmArgs, options) => run(label, process.execPath, [npmCli, ...npmArgs], options);
const npxRun = (label, npxArgs, options) => run(label, process.execPath, [npxCli, ...npxArgs], options);
// The package's Lean release, pinned as a user would; it also stops the search for
// lean-toolchain from reaching an enclosing checkout.
const pin = directory => writeFileSync(join(directory, 'lean-toolchain'), `leanprover/lean4:v${record.lean}\n`);
function project(name) {
  const directory = join(work, name);
  assert.ok(!existsSync(directory), `Use a new work directory: ${directory}`);
  mkdirSync(directory, { recursive: true });
  writeFileSync(join(directory, 'package.json'), JSON.stringify({ name: 'lasm-npm-consumer', private: true, version: '1.0.0' }, null, 2) + '\n');
  writeFileSync(join(directory, 'Main.lean'), readFileSync(join(root, 'examples/hello/Main.lean')));
  pin(directory);
  return directory;
}
function installedTools(projectDirectory) {
  const scoped = join(projectDirectory, 'node_modules', record.scope);
  return existsSync(scoped) ? readdirSync(scoped).sort() : [];
}
/** Ask the installed product which tool packages it can resolve. */
function packageCheck(productSource, label) {
  const script = `import(${JSON.stringify(pathToFileURL(join(productSource, 'npm-artifacts.mjs')).href)}).then(async m => console.log(JSON.stringify(await m.checkInstalledToolPackages())))`;
  const result = run(label, process.execPath, ['--input-type=module', '-e', script]);
  return JSON.parse(result.stdout.trim().split('\n').at(-1));
}
function auditSummary() {
  const lines = existsSync(audit) ? readFileSync(audit, 'utf8').trim().split('\n').filter(Boolean).map(line => JSON.parse(line)) : [];
  const blocked = lines.filter(line => line.blocked);
  return { requests: lines.length, hosts: [...new Set(lines.map(line => line.host))].sort(), blocked: blocked.length,
    blockedHosts: [...new Set(blocked.map(line => line.host))] };
}
function receipts() {
  const directory = join(work, `lasm-cache-${cacheName}`, 'artifacts');
  if (!existsSync(directory)) return [];
  return readdirSync(directory).filter(name => !name.startsWith('.')).map(name => {
    const receipt = JSON.parse(readFileSync(join(directory, name, '.lasm-artifact.json'), 'utf8'));
    return { artifact: receipt.artifact.name, bytes: receipt.artifact.bytes, source: receipt.source };
  }).sort((a, b) => a.artifact < b.artifact ? -1 : 1);
}
const expected = install => record.packages.filter(p => p.install === install && (!p.platform || p.platform === host));
const short = name => name.slice(record.scope.length + 1);
const report = { schema: 1, scenario: args.scenario, host, node: process.versions.node, registry, main: spec, startedAt: new Date().toISOString() };

if (args.scenario === 'installed' || args.scenario === 'lake') {
  const directory = join(work, 'installed');
  if (args.scenario === 'installed') {
    project('installed');
    report.install = npmRun('npm install', ['install', '--save-exact', spec], { cwd: directory }).seconds;
    const tools = installedTools(directory);
    report.installedPackages = tools;
    assert.deepEqual(tools, [...expected('optional'), ...expected('required'), { name: record.main.name }].map(p => short(p.name)).sort(),
      'npm installs exactly this platform\'s packages and the shared ones');
    // Starter code is also MIT-0 (0.3.1): the licence texts ship and the SPDX expression names it.
    const cli = join(directory, 'node_modules', record.main.name), cliMeta = JSON.parse(readFileSync(join(cli, 'package.json'), 'utf8'));
    if (existsSync(join(root, 'LICENSE-MIT-0'))) {
      for (const file of ['LICENSE', 'LICENSE-MIT-0', 'templates/LICENSE', 'examples/LICENSE']) assert.ok(existsSync(join(cli, file)), `The installed CLI lacks ${file}`);
      assert.match(cliMeta.license, /(?:^| AND )MIT-0(?: AND |$)/, `The CLI licence names MIT-0: ${cliMeta.license}`);
    }
    const result = npxRun('npx lasm Main.lean', ['lasm', 'Main.lean'], { cwd: directory });
    assert.match(result.stdout, /Hello from Lean! 2 \+ 3 = 5/);
    report.build = result.seconds;
  } else {
    const lake = join(directory, 'lake app');
    mkdirSync(lake);
    writeFileSync(join(lake, 'lakefile.toml'), 'name = "greeting"\nversion = "0.1.0"\n[[lean_lib]]\nname = "Greeting"\n[[lean_exe]]\nname = "hello"\nroot = "Main"\n');
    writeFileSync(join(lake, 'Greeting.lean'), 'def greeting : String := s!"Lean module: {6 * 7}"\n');
    writeFileSync(join(lake, 'Main.lean'), 'import Greeting\ndef main : IO Unit := IO.println greeting\n');
    const result = npxRun('npx lasm (Lake project)', ['lasm', 'Main.lean'], { cwd: lake });
    assert.match(result.stdout, /Lean module: 42/);
    report.build = result.seconds;
  }
  report.receipts = receipts();
  const kinds = new Set(report.receipts.map(r => r.source?.kind));
  assert.ok(!kinds.has('https') && !kinds.has(undefined), 'Every tool came from npm');
  if (args.scenario === 'lake') assert.ok(kinds.has('npm-fetched'), 'On-demand packages were fetched with npm');
}

if (args.scenario === 'c-tier') {
  // Bundled C: Lake compiles c/ctable.c natively with Lean's clang from the C tier package.
  const app = join(work, 'installed', 'extern-lib');
  assert.ok(!existsSync(app), `Use a new work directory: ${app}`);
  cpSync(join(root, 'scripts/ecosystem/projects/extern-lib'), app, { recursive: true, filter: file => !file.endsWith('project.json') });
  const result = npxRun('npx lasm (Lake project with bundled C)', ['lasm', 'Main.lean'], { cwd: app });
  assert.match(result.stdout, /twice 7 = 14\r?\nsquare 7 = 49\r?\nscaled 7 = 21/);
  report.build = result.seconds;
  report.receipts = receipts();
  const kinds = new Set(report.receipts.map(r => r.source?.kind));
  assert.ok(!kinds.has('https') && !kinds.has(undefined), 'Every tool came from npm');
  const cPackage = record.packages.find(p => p.name === `${record.scope}/lean-c-${host}`);
  assert.ok(cPackage, `No C tier package for ${host}`);
  const c = report.receipts.find(r => r.artifact === cPackage.artifact.name);
  assert.ok(c, 'The C tier was installed');
  assert.deepEqual([c.source.kind, c.source.package, c.source.version], ['npm-fetched', cPackage.name, cPackage.version],
    'The C tier came from its npm package');
  report.cTier = { package: `${cPackage.name}@${cPackage.version}`, source: c.source };
}

if (args.scenario === 'edge') {
  // Edge isolates and the portable profile (docs/EDGE.md): the published CLI carries the
  // single-threaded runtime in targets/, so nothing is fetched for it.
  assert.ok(record.edge?.directory, 'This build bundles no edge runtime');
  const cli = join(work, 'installed', 'node_modules', record.main.name);
  assert.ok(existsSync(join(cli, record.edge.directory, 'libraries.json')), `The installed CLI lacks ${record.edge.directory}`);
  const app = join(work, 'installed', 'edge-pure');
  assert.ok(!existsSync(app), `Use a new work directory: ${app}`);
  // No package.json of its own: npx resolves lasm from the `installed` project, as in `lake`.
  cpSync(join(root, 'examples/edge-pure'), app, { recursive: true, filter: file => !file.endsWith('package.json') });
  const outputs = { workers: 'workers/lasm/program.wasm', 'vercel-edge': 'api/_lasm/lasm/program.wasm', 'netlify-edge': 'netlify/lasm/lasm/program.wasm.mjs',
    'deno-deploy': 'deno/lasm/program.wasm', 'supabase-edge': 'supabase/functions', bun: 'bun/main.mjs', deno: 'deno/main.mjs' };
  report.targets = {};
  for (const [target, output] of Object.entries(outputs)) {
    report.targets[target] = npxRun(`npx lasm build --target ${target}`, ['lasm', 'build', 'Main.lean', '--target', target], { cwd: app }).seconds;
    assert.ok(existsSync(join(app, output)), `--target ${target} wrote no ${output}`);
  }
  const functions = join(app, 'supabase/functions');
  assert.ok(readdirSync(functions).some(name => existsSync(join(functions, name, 'index.ts'))), 'supabase-edge wrote no function index.ts');
  report.receipts = receipts();
  const kinds = new Set(report.receipts.map(r => r.source?.kind));
  assert.ok(!kinds.has('https') && !kinds.has(undefined), 'Every tool came from npm');
  assert.ok(!report.receipts.some(r => r.artifact === record.edge.archive.name), 'The edge runtime came from the CLI package, not a download');
}

if (args.scenario.startsWith('launch-')) {
  const part = args.scenario.slice('launch-'.length);
  assert.ok(['web', 'fetch', 'fastify', 'fullstack'].includes(part), `Unknown scenario ${args.scenario}`);
  const directory = join(work, `${args.scenario}-empty`);
  assert.ok(!existsSync(directory), `Use a new work directory: ${directory}`);
  mkdirSync(directory, { recursive: true });
  report.launch = {};
  const init = (name, template, deploy = []) => {
    npxRun(`npx @lasm/cli init --template ${template}`, ['--yes', spec, 'init', name, '--template', template, ...deploy.flatMap(target => ['--deploy', target])], { cwd: directory });
    const app = join(directory, name);
    assert.deepEqual(JSON.parse(readFileSync(join(app, 'package.json'), 'utf8')).devDependencies?.[record.main.name], record.main.version, `${template} pins the published CLI`);
    npmRun(`npm install (${template})`, ['install'], { cwd: app });
    return app;
  };
  const freePort = () => new Promise((done, fail) => {
    const server = createServer().once('error', fail);
    server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
  });
  // Starts `node entry`, polls GET path until it answers 200, checks the body, stops the server.
  const serve = async (label, app, entry, path, check) => {
    const port = await freePort();
    const child = spawn(process.execPath, [join(app, entry)], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'], windowsHide: true,
      env: environment({ HOST: '127.0.0.1', PORT: String(port) }) });
    let output = '';
    child.stdout.setEncoding('utf8').on('data', text => { output += text; }); child.stderr.setEncoding('utf8').on('data', text => { output += text; });
    const exited = new Promise(done => child.once('exit', done));
    try {
      const deadline = Date.now() + 120_000;
      for (;;) {
        assert.equal(child.exitCode, null, `${label}: the server exited:\n${output}`);
        try {
          const response = await fetch(`http://127.0.0.1:${port}${path}`, { signal: AbortSignal.timeout(10_000) });
          const body = await response.text();
          if (response.status === 200) { assert.ok(check(body), `${label} ${path}: ${body.slice(0, 300)}`); break; }
        } catch (error) { if (error.code === 'ERR_ASSERTION') throw error; }
        assert.ok(Date.now() < deadline, `${label}: no 200 on ${path} within 120 s:\n${output}`);
        await new Promise(done => setTimeout(done, 500));
      }
      report.launch[label] = { served: path };
    } finally {
      if (child.exitCode === null) child.kill('SIGTERM');
      await Promise.race([exited, new Promise(done => setTimeout(done, 15_000))]);
      if (child.exitCode === null) child.kill('SIGKILL');
      appendFileSync(log, `\n=== ${label} server output\n${output}\n`);
    }
  };
  // The browser template: a static site.
  if (part === 'web') {
  const web = init('web', 'web');
  npmRun('npm run build (web, --target browser)', ['run', 'build'], { cwd: web });
  for (const file of ['dist/index.html', 'dist/lasm-manifest.json']) assert.ok(existsSync(join(web, file)), `web: no ${file}`);
  // The Vite plugin as users import it: import lasm from '@lasm/cli/vite'.
  const vite = join(directory, 'vite');
  cpSync(join(root, 'test/browser/vite'), vite, { recursive: true });
  for (const file of ['Main.lean', 'App.lean', 'lean-toolchain']) cpSync(join(web, file), join(vite, file));
  writeFileSync(join(vite, 'package.json'), JSON.stringify({ name: 'vite-app', private: true, type: 'module',
    devDependencies: { vite: viteVersion, [record.main.name]: record.main.version } }, null, 2) + '\n');
  npmRun('npm install (Vite app)', ['install'], { cwd: vite });
  run('vite build (@lasm/cli/vite)', process.execPath, [join(vite, 'node_modules/vite/bin/vite.js'), 'build', '--outDir', 'out'], { cwd: vite });
  assert.ok(existsSync(join(vite, 'out/index.html')), 'vite: no out/index.html');
  assert.ok(readdirSync(join(vite, 'out'), { recursive: true }).some(file => String(file).endsWith('.wasm')), 'vite: no .wasm in out/');
  }
  // The fetch template: Node, then the WASI targets, then the editor support.
  if (part === 'fetch') {
  const fetchApp = init('fetch', 'fetch', ['fastly', 'wasi-http']);
  npmRun('npm run build (fetch)', ['run', 'build'], { cwd: fetchApp });
  await serve('fetch', fetchApp, 'dist/main.mjs', '/', body => JSON.parse(body).message === 'Hello from Lean!');
  for (const [target, output] of [['wasi', 'wasi/main.wasm'], ['fastly', 'bin/main.wasm'], ['wasi-http', 'wasi-http/main.wasm']]) {
    npxRun(`npx lasm build --target ${target}`, ['lasm', 'build', 'Main.lean', '--target', target], { cwd: fetchApp });
    assert.ok(existsSync(join(fetchApp, output)), `--target ${target} wrote no ${output}`);
  }
  // Editor support with Lean already cached: a stub elan records the link and the override.
  const elanHome = join(directory, 'elan-home'), stub = join(directory, 'elan-stub'), calls = join(directory, 'elan-calls.txt');
  mkdirSync(join(elanHome, 'toolchains'), { recursive: true }); mkdirSync(stub, { recursive: true });
  if (process.platform !== 'win32') {
    writeFileSync(join(stub, 'elan'), `#!/bin/sh\necho "$@" >> '${calls}'\n`, { mode: 0o755 });
    const editorEnv = environment({ ELAN_HOME: elanHome, PATH: `${stub}${process.platform === 'win32' ? ';' : ':'}${process.env.PATH}` });
    npxRun('npx lasm editor (Lean cached)', ['lasm', 'editor'], { cwd: fetchApp, env: editorEnv });
    const lines = readFileSync(calls, 'utf8');
    assert.match(lines, /^toolchain link lasm-\S+ \S+/m, `elan was not asked to link Lasm's Lean: ${lines}`);
    assert.match(lines, /^override set lasm-/m, `elan was not asked to set the override: ${lines}`);
    report.launch.editor = lines.trim().split('\n');
  } else {
    // No stub executable on Windows: without elan, lasm editor explains how to get it.
    const result = npxRun('npx lasm editor (no elan)', ['lasm', 'editor'], { cwd: fetchApp, env: environment({ ELAN_HOME: elanHome }), expectFailure: true });
    assert.match(result.stderr, /npx lasm editor/, 'lasm editor names the fix without elan');
    report.launch.editor = 'no-elan message';
  }
  }
  // Fastify (npm dependencies mirrored into the loopback registry).
  if (part === 'fastify') {
  const fastify = init('fastify', 'fastify');
  npmRun('npm run build (fastify)', ['run', 'build'], { cwd: fastify });
  await serve('fastify', fastify, 'dist/main.mjs', '/', body => JSON.parse(body).message === 'Hello from Lean on Fastify!');
  }
  // The fullstack template: the browser app, then the server that renders the first page.
  if (part === 'fullstack') {
  const fullstack = init('fullstack', 'fullstack');
  npmRun('npm run build (fullstack)', ['run', 'build'], { cwd: fullstack });
  await serve('fullstack', fullstack, 'dist/server/main.mjs', '/', body => body.includes('<li'));
  }
  report.receipts = receipts();
  const kinds = new Set(report.receipts.map(r => r.source?.kind));
  assert.ok(!kinds.has('https') && !kinds.has(undefined), 'Every tool came from npm');
}

if (args.scenario === 'npx') {
  const directory = join(work, 'npx-empty');
  mkdirSync(directory, { recursive: true });
  writeFileSync(join(directory, 'Main.lean'), readFileSync(join(root, 'examples/hello/Main.lean')));
  pin(directory);
  const result = npxRun('npx --yes @lasm/cli Main.lean', ['--yes', spec, 'Main.lean'], { cwd: directory });
  assert.match(result.stdout, /Hello from Lean! 2 \+ 3 = 5/);
  report.build = result.seconds;
  report.receipts = receipts();
  assert.ok(report.receipts.every(r => r.source?.kind === 'npm-installed'), 'npx installed the platform packages too');
}

if (args.scenario === 'init') {
  // The getting-started path after publication: scaffold with npx, install, build, run.
  const directory = join(work, 'init-empty');
  mkdirSync(directory, { recursive: true });
  npxRun('npx --yes @lasm/cli init', ['--yes', spec, 'init', 'app', '--template', 'plain'], { cwd: directory });
  const app = join(directory, 'app');
  const manifest = JSON.parse(readFileSync(join(app, 'package.json'), 'utf8'));
  assert.deepEqual(manifest.devDependencies, { [record.main.name]: record.main.version }, 'lasm init pins the published CLI');
  report.install = npmRun('npm install (initialized app)', ['install'], { cwd: app }).seconds;
  report.build = npmRun('npm run build', ['run', 'build'], { cwd: app }).seconds;
  const result = run('node dist/main.mjs Ada', process.execPath, [join(app, 'dist', 'main.mjs'), 'Ada'], { cwd: app });
  assert.match(result.stdout, /Hello, Ada, from Lean!/);
  report.receipts = receipts();
  const kinds = new Set(report.receipts.map(r => r.source?.kind));
  assert.ok(!kinds.has('https') && !kinds.has(undefined), 'Every tool came from npm');
}

if (args.scenario === 'create') {
  // The first command of the getting-started guide: npm create @lasm, then a Hono server.
  assert.ok(record.create, 'This build has no @lasm/create package');
  const directory = join(work, 'create-empty');
  mkdirSync(directory, { recursive: true });
  npmRun('npm create @lasm', ['create', '--yes', `@lasm@${record.create.version}`, 'app', '--', '--template', 'hono'], { cwd: directory });
  const app = join(directory, 'app');
  const manifest = JSON.parse(readFileSync(join(app, 'package.json'), 'utf8'));
  assert.deepEqual(manifest.devDependencies, { [record.main.name]: record.main.version }, '@lasm/create scaffolds with the pinned CLI');
  assert.ok(manifest.dependencies?.hono, 'The hono template');
  report.install = npmRun('npm install (created app)', ['install'], { cwd: app }).seconds;
  report.build = npmRun('npm run build', ['run', 'build'], { cwd: app }).seconds;
  const port = await new Promise((done, fail) => {
    const server = createServer().once('error', fail);
    server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
  });
  const child = spawn(process.execPath, [join(app, 'dist', 'main.mjs')], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'], windowsHide: true,
    env: environment({ HOST: '127.0.0.1', PORT: String(port) }) });
  let output = '';
  const exited = new Promise(done => child.once('exit', (code, signal) => done({ code, signal })));
  try {
    await new Promise((done, fail) => {
      const timer = setTimeout(() => fail(new Error(`The server did not start within 120 s:\n${output}`)), 120_000);
      const check = text => { output += text; if (/Listening on http:\/\/127\.0\.0\.1:\d+/.test(output)) { clearTimeout(timer); done(); } };
      child.stdout.setEncoding('utf8').on('data', check); child.stderr.setEncoding('utf8').on('data', check);
      child.once('exit', code => { clearTimeout(timer); fail(new Error(`The server exited (${code}):\n${output}`)); });
    });
    report.requests = [];
    for (const [path, expected] of [['/', { message: 'Hello from Lean on Hono!' }], ['/hello/Ada', { message: 'Hello, Ada, from Lean!' }],
      ['/health', { ok: true }]]) {
      const response = await fetch(`http://127.0.0.1:${port}${path}`, { signal: AbortSignal.timeout(30_000) });
      const body = await response.text();
      assert.equal(response.status, 200, `${path}: ${body}`);
      assert.deepEqual(JSON.parse(body), expected, path);
      report.requests.push({ path, status: response.status, body });
    }
  } finally {
    if (child.exitCode === null) child.kill('SIGTERM');
    await Promise.race([exited, new Promise(done => setTimeout(done, 15_000))]);
    if (child.exitCode === null) child.kill('SIGKILL');
    appendFileSync(log, `\n=== server output\n${output}\n`);
  }
  report.receipts = receipts();
  const kinds = new Set(report.receipts.map(r => r.source?.kind));
  assert.ok(!kinds.has('https') && !kinds.has(undefined), 'Every tool came from npm');
}

if (args.scenario === 'omit-optional') {
  const directory = project('omit-optional');
  npmRun('npm install --omit=optional', ['install', '--save-exact', '--omit=optional', spec], { cwd: directory });
  report.installedPackages = installedTools(directory);
  assert.ok(expected('optional').every(p => !report.installedPackages.includes(short(p.name))));
  const failure = npxRun('npx lasm Main.lean (platform packages omitted)', ['lasm', 'Main.lean'], { cwd: directory, expectFailure: true });
  const fix = `npm install ${expected('optional').map(p => `${p.name}@${p.version}`).sort().join(' ')}`;
  report.message = failure.stderr.split('\n').find(line => line.includes('Fix: run'));
  assert.ok(report.message?.includes('`' + fix + '`'), `Expected the exact fix \`${fix}\`, got: ${report.message}`);
  report.fix = fix;
  npmRun('the printed fix', fix.split(' ').slice(1), { cwd: directory });
  const check = packageCheck(join(directory, 'node_modules', record.main.name, 'src'), 'resolve tool packages after the fix');
  assert.deepEqual(check.missing, []);
  report.afterFix = check;
}

if (args.scenario === 'foreign-lock') {
  // A lockfile made "on" another platform with npm's own platform overrides.
  const other = host.startsWith('linux') ? { os: 'darwin', cpu: 'arm64' } : { os: 'linux', cpu: 'x64', libc: 'glibc' };
  const directory = project('foreign-lock');
  npmRun(`npm install for ${other.os}-${other.cpu}`, ['install', '--save-exact', spec, `--os=${other.os}`, `--cpu=${other.cpu}`,
    ...(other.libc ? [`--libc=${other.libc}`] : [])], { cwd: directory });
  const lock = JSON.parse(readFileSync(join(directory, 'package-lock.json'), 'utf8'));
  report.lockedPlatformPackages = Object.keys(lock.packages).filter(key => /node_modules\/@[^/]+\/(?:lean|emscripten)-(?:linux|darwin|win32)/.test(key)).map(key => key.split('/').at(-1)).sort();
  rmSync(join(directory, 'node_modules'), { recursive: true, force: true });
  npmRun('npm ci on this host', ['ci'], { cwd: directory });
  report.installedPackages = installedTools(directory);
  report.check = packageCheck(join(directory, 'node_modules', record.main.name, 'src'), 'resolve tool packages after npm ci');
  // Documented, not asserted: whether npm ci installs this host's optional packages from a foreign lockfile.
}

if (args.scenario === 'pnpm') {
  assert.ok(args.pnpm, 'Pass --pnpm with the pnpm CLI script');
  const directory = project('pnpm');
  run('pnpm add', process.execPath, [resolve(args.pnpm), 'add', '--save-exact', spec, '--registry', registry,
    '--store-dir', join(work, 'pnpm-store'), '--config.confirmModulesPurge=false'], { cwd: directory });
  report.check = packageCheck(join(directory, 'node_modules', record.main.name, 'src'), 'resolve tool packages under pnpm');
  assert.deepEqual(report.check.missing, []);
}

report.network = auditSummary();
assert.equal(report.network.blocked, 0, `Non-loopback requests were attempted: ${report.network.blockedHosts.join(', ')}`);
report.finishedAt = new Date().toISOString();
writeFileSync(join(work, `report-${args.scenario}.json`), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
