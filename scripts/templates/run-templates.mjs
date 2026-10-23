// End-to-end check of `lasm init` templates with an installed Lasm package (a
// candidate tarball): init, npm install, lasm build, run, HTTP requests,
// expected responses, SIGTERM shutdown; optionally the template's Dockerfile.
//   node run-templates.mjs CANDIDATE_TGZ WORK_DIR RESULT.json [--docker] [--templates plain,express,…]
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const args = process.argv.slice(2);
const flag = name => { const i = args.indexOf(name); if (i < 0) return undefined; const [, value] = args.splice(i, 2); return value; };
const docker = args.includes('--docker') ? (args.splice(args.indexOf('--docker'), 1), true) : false;
const only = flag('--templates');
const [tgzArg, workArg, resultArg] = args;
assert.ok(tgzArg && workArg && resultArg, 'Usage: node run-templates.mjs CANDIDATE_TGZ WORK_DIR RESULT.json [--docker] [--templates a,b]');
const tgz = resolve(tgzArg), work = resolve(workArg), resultFile = resolve(resultArg);
assert.ok(!existsSync(work), 'Use a new work directory');
const templates = only ? only.split(',') : docker ? ['plain', 'express', 'hono', 'std-http'] : ['plain', 'express', 'hono', 'std-http', 'guide'];
const result = { platform: `${process.platform}-${process.arch}`, node: process.version, candidate: tgz, docker,
  startedAt: new Date().toISOString(), templates: [], steps: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const tool = name => process.platform === 'win32'
  ? [process.execPath, join(dirname(process.execPath), `node_modules/npm/bin/${name}-cli.js`)]
  : [join(dirname(process.execPath), name)];
const npm = tool('npm'), npx = tool('npx');
const quiet = { npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' };

function run(label, [command, ...base], argv, cwd, options = {}) {
  const started = performance.now();
  const r = spawnSync(command, [...base, ...argv], { cwd, encoding: 'utf8', timeout: options.timeout ?? 3600_000,
    maxBuffer: 64 * 1024 * 1024, env: { ...process.env, ...quiet, ...options.env } });
  const step = { label, args: argv, code: r.status, seconds: Math.round((performance.now() - started) / 100) / 10,
    stdout: r.stdout?.slice(-4000), stderr: r.stderr?.slice(-8000), error: r.error?.message };
  result.steps.push(step); save();
  if (!options.allowFailure) assert.equal(r.status, 0, `${label} failed (${r.status}): ${r.stderr?.slice(-4000)}${r.error?.message ?? ''}`);
  return r;
}

const freePort = () => new Promise((done, fail) => {
  const server = net.createServer(); server.once('error', fail);
  server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
});

async function request(base, method, path, body) {
  const response = await fetch(base + path, { method, headers: body ? { 'content-type': 'application/json' } : {},
    body: body ? JSON.stringify(body) : undefined, signal: AbortSignal.timeout(30_000) });
  return { status: response.status, body: await response.text() };
}

/** The HTTP contract every server template implements. */
async function checkServer(base, framework) {
  const checks = [
    ['GET', '/', undefined, 200, { message: `Hello from Lean on ${framework}!` }],
    ['GET', '/hello/Ada', undefined, 200, { message: 'Hello, Ada, from Lean!' }],
    ['POST', '/echo', { n: [1, 2], s: 'λ' }, 200, { echo: { n: [1, 2], s: 'λ' } }],
    ['GET', '/health', undefined, 200, { ok: true }],
  ];
  const seen = [];
  for (const [method, path, body, status, expected] of checks) {
    const r = await request(base, method, path, body);
    seen.push({ method, path, ...r });
    assert.equal(r.status, status, `${method} ${path}: ${r.status} ${r.body}`);
    assert.deepEqual(JSON.parse(r.body), expected, `${method} ${path}`);
  }
  const missing = await request(base, 'GET', '/missing');
  seen.push({ method: 'GET', path: '/missing', ...missing });
  assert.equal(missing.status, 404);
  return seen;
}

function waitForLine(child, pattern, timeoutMs, output) {
  return new Promise((done, fail) => {
    const timer = setTimeout(() => fail(new Error(`No "${pattern}" within ${timeoutMs} ms:\n${output.text}`)), timeoutMs);
    const check = () => { if (pattern.test(output.text)) { clearTimeout(timer); done(); } };
    child.stdout.on('data', check); child.stderr.on('data', check);
    child.once('exit', code => { clearTimeout(timer); fail(new Error(`Exited ${code} before "${pattern}":\n${output.text}`)); });
  });
}

const framework = { express: 'Express', hono: 'Hono', 'std-http': 'Std.Http' };
assert.ok(templates.every(t => t === 'plain' || t === 'guide' || framework[t]), `Unknown template in ${templates}`);

try {
  mkdirSync(work, { recursive: true });
  // The CLI the user would run with `npx @lasm/cli init`.
  const cli = join(work, 'cli');
  mkdirSync(cli);
  run('npm install Lasm (for lasm init)', npm, ['install', '--no-save', tgz], cli);
  for (const template of templates) {
    const entry = { template, ok: false }; result.templates.push(entry); save();
    // "guide": docs/GETTING_STARTED.md step 3 (the hono template plus an npm
    // package), taken verbatim from the guide.
    const guide = template === 'guide';
    const base = guide ? 'hono' : template;
    const app = join(work, `${template} app λ`);
    // LASM_INIT_FROM_SOURCE=1 takes `lasm init` from this checkout (local runs with an older candidate).
    if (process.env.LASM_INIT_FROM_SOURCE === '1')
      run(`lasm init ${template} (source)`, [process.execPath], [fileURLToPath(new URL('../../bin/lasm.mjs', import.meta.url)), 'init', app, '--template', base], cli);
    else run(`lasm init ${base}`, npx, ['lasm', 'init', app, '--template', base], cli);
    for (const file of ['lakefile.toml', 'lean-toolchain', 'package.json', 'Main.lean', 'App.lean', 'README.md', 'Dockerfile', '.gitignore', '.dockerignore'])
      assert.ok(existsSync(join(app, file)), `${template}: missing ${file}`);
    // A local copy keeps the dependency inside the Docker build context.
    copyFileSync(tgz, join(app, 'lasm-cli.tgz'));
    run(`${template}: npm install`, npm, ['install', '-D', './lasm-cli.tgz'], app);
    if (guide) {
      const text = readFileSync(fileURLToPath(new URL('../../docs/GETTING_STARTED.md', import.meta.url)), 'utf8').replace(/\r\n/g, '\n');
      const install = /^npm install (marked@\S+)$/m.exec(text);
      const source = /<!-- guide:Main\.lean -->\n```lean\n([\s\S]*?)```/.exec(text);
      assert.ok(install && source, 'GETTING_STARTED.md: npm install line or the Main.lean block not found');
      run('guide: npm install ' + install[1], npm, ['install', install[1]], app);
      writeFileSync(join(app, 'Main.lean'), source[1]);
    }
    const build = run(`${template}: npm run build`, npm, ['run', 'build'], app);
    entry.buildSeconds = result.steps.at(-1).seconds;
    assert.ok(existsSync(join(app, 'dist/main.mjs')), build.stderr);
    if (template === 'plain') {
      const direct = spawnSync(process.execPath, [join(app, 'dist/main.mjs'), 'Ada'], { encoding: 'utf8', timeout: 120_000 });
      assert.equal(direct.status, 0, direct.stderr); assert.equal(direct.stdout, 'Hello, Ada, from Lean!\n');
      const dev = run('plain: npm run dev -- Ada', npm, ['run', '--silent', 'dev', '--', 'Ada'], app);
      assert.equal(dev.stdout, 'Hello, Ada, from Lean!\n');
      entry.output = direct.stdout;
    } else {
      const port = await freePort();
      const output = { text: '' };
      const started = performance.now();
      const child = spawn(process.execPath, [join(app, 'dist/main.mjs')], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'],
        env: { ...process.env, HOST: '127.0.0.1', PORT: String(port) } });
      child.stdout.on('data', b => { output.text += b; }); child.stderr.on('data', b => { output.text += b; });
      const exited = new Promise(done => child.once('exit', (code, signal) => done({ code, signal })));
      try {
        await waitForLine(child, /Listening on http:\/\/127\.0\.0\.1:\d+/, 120_000, output);
        entry.readyMs = Math.round(performance.now() - started);
        entry.requests = await checkServer(`http://127.0.0.1:${port}`, framework[base]);
        if (guide) {
          const url = `http://127.0.0.1:${port}`;
          const rendered = await request(url, 'POST', '/render', { markdown: '# Hi from *Lean*' });
          assert.equal(rendered.status, 200, rendered.body);
          assert.deepEqual(JSON.parse(rendered.body), { html: '<h1>Hi from <em>Lean</em></h1>\n' });
          const invalid = await request(url, 'POST', '/render', { text: 1 });
          assert.equal(invalid.status, 400, invalid.body);
          entry.requests.push({ path: '/render', ...rendered }, { path: '/render (invalid)', ...invalid });
        }
      } finally {
        if (child.exitCode === null) child.kill('SIGTERM');
      }
      const stopStart = performance.now();
      const stopped = await Promise.race([exited, new Promise(done => setTimeout(() => done('timeout'), 15_000))]);
      entry.stop = { result: stopped, ms: Math.round(performance.now() - stopStart) };
      entry.output = output.text.slice(-2000);
      if (stopped === 'timeout') { child.kill('SIGKILL'); assert.fail(`${template}: no exit within 15 s of SIGTERM`); }
      // Windows has no SIGTERM: Node terminates the process.
      if (process.platform !== 'win32') assert.deepEqual(stopped, { code: 0, signal: null }, `${template}: SIGTERM exit`);
    }
    if (docker && !guide) {
      const image = `lasm-template-${template}:test`;
      const dockerBuild = run(`${template}: docker build`, ['docker'], ['build', '--progress=plain', '-t', image, '.'], app,
        { env: { DOCKER_BUILDKIT: '1' } });
      entry.dockerBuildSeconds = result.steps.at(-1).seconds;
      const inspect = run(`${template}: docker image size`, ['docker'], ['image', 'inspect', image, '--format', '{{.Size}}'], app);
      entry.imageBytes = Number(inspect.stdout.trim());
      if (template === 'plain') {
        const out = run('plain: docker run', ['docker'], ['run', '--rm', '--memory=512m', '--read-only', image, 'node', 'dist/main.mjs', 'Ada'], app);
        assert.equal(out.stdout, 'Hello, Ada, from Lean!\n', dockerBuild.stderr);
      } else {
        const port = await freePort();
        const name = `lasm-template-${template}-${process.pid}`;
        run(`${template}: docker run`, ['docker'], ['run', '-d', '--name', name, '--memory=512m', '--read-only', '--tmpfs', '/tmp',
          '-p', `127.0.0.1:${port}:8080`, image], app);
        try {
          let ready = false;
          for (let i = 0; i < 240 && !ready; i++) {
            const logs = spawnSync('docker', ['logs', name], { encoding: 'utf8' });
            ready = /Listening on http:\/\/0\.0\.0\.0:8080/.test(logs.stdout + logs.stderr);
            if (!ready) await new Promise(done => setTimeout(done, 500));
          }
          assert.ok(ready, `${template}: the container did not report Listening on 0.0.0.0:8080`);
          entry.dockerRequests = await checkServer(`http://127.0.0.1:${port}`, framework[template]);
          const stopStart = performance.now();
          run(`${template}: docker stop`, ['docker'], ['stop', '--time', '10', name], app);
          entry.dockerStopMs = Math.round(performance.now() - stopStart);
          const state = run(`${template}: container exit code`, ['docker'], ['inspect', name, '--format', '{{.State.ExitCode}}'], app);
          entry.dockerExitCode = Number(state.stdout.trim());
          assert.equal(entry.dockerExitCode, 0, `${template}: container exit code after docker stop`);
          assert.ok(entry.dockerStopMs < 9000, `${template}: docker stop took ${entry.dockerStopMs} ms (SIGTERM ignored?)`);
        } finally {
          entry.dockerLogs = spawnSync('docker', ['logs', name], { encoding: 'utf8' }).stdout?.slice(-2000);
          spawnSync('docker', ['rm', '-f', name]);
        }
      }
    }
    entry.ok = true; save();
  }
  result.passed = true;
} catch (error) {
  result.passed = false; result.error = error.stack;
  save();
  throw error;
} finally { result.finishedAt = new Date().toISOString(); save(); }
console.log(JSON.stringify({ passed: result.passed, templates: result.templates.map(t => ({ template: t.template, ok: t.ok,
  buildSeconds: t.buildSeconds, readyMs: t.readyMs, imageBytes: t.imageBytes })) }, null, 2));
