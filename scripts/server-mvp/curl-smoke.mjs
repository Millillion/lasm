// Real-client smoke for the example server: curl (routing, JSON, keep-alive,
// chunked upload, streamed events), a raw-socket malformed request and Node
// fetch, against the deployed Node application and its native executable.
//   node curl-smoke.mjs MANIFEST(application.json from managed-http.mjs) ENGINE OUTPUT.json
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { mkdtempSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { connect } from 'node:net';

const [manifestFile, engine, outputFile] = process.argv.slice(2);
assert.ok(manifestFile && engine && outputFile && !existsSync(outputFile));
const manifest = JSON.parse(readFileSync(manifestFile));
const curlVersion = spawnSync('curl', ['--version'], { encoding: 'utf8' }).stdout.split('\n')[0];

async function start(kind) {
  const directory = mkdtempSync(join(tmpdir(), `lasm-smoke-${kind}-`));
  const env = { PATH: '', LEAN_NUM_THREADS: '2', HOME: directory };
  const child = kind === 'node' ? spawn(engine, [join(manifest.deployed, 'main.mjs'), '0', directory], { cwd: directory, env })
    : spawn(manifest.nativeExecutable, ['0', directory], { cwd: directory, env });
  let stdout = '', stderr = '';
  child.stderr.on('data', bytes => { stderr += bytes; });
  const started = Date.now();
  const url = await new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error('startup timeout: ' + stderr)), 90_000);
    child.stdout.on('data', bytes => {
      stdout += bytes;
      const match = stdout.match(/Listening on http:\/\/([\d.]+:\d+)/);
      if (match) { clearTimeout(timer); resolve('http://' + match[1]); }
    });
    child.once('exit', code => reject(new Error(`exited ${code}: ${stderr}`)));
  });
  return { child, url, startupSeconds: (Date.now() - started) / 1000, logs: () => ({ stdout, stderr }) };
}
function curl(args, input) {
  const result = spawnSync('curl', ['-sS', '--max-time', '20', ...args], { encoding: 'utf8', input, timeout: 30_000 });
  return { code: result.status, stdout: result.stdout, stderr: result.stderr };
}
function raw(url, request) {
  const { hostname, port } = new URL(url);
  return new Promise((resolve, reject) => {
    const socket = connect(Number(port), hostname, () => socket.write(request));
    let data = '';
    socket.on('data', bytes => { data += bytes; });
    socket.on('end', () => resolve(data));
    socket.on('error', reject);
    socket.setTimeout(10_000, () => { socket.destroy(); resolve(data); });
  });
}

async function smoke(kind) {
  const server = await start(kind);
  const { url } = server, checks = [];
  const check = (name, ok, detail) => checks.push({ name, ok: Boolean(ok), detail });
  try {
    let r = curl(['-i', url + '/']);
    check('GET / routes to JSON', /^HTTP\/1\.1 200/.test(r.stdout) && /"application": ?"Lean todo server"/.test(r.stdout), r.stdout.slice(0, 400));
    r = curl(['-s', '-o', '/dev/null', '-w', '%{http_code}', url + '/missing']);
    check('unknown route is 404', r.stdout === '404', r.stdout);
    r = curl(['-s', '-w', '\n%{http_code}', '-H', 'content-type: application/json', '--data', '{"title":"Ünïcode ✓"}', url + '/todos']);
    check('POST /todos creates (201) with Unicode JSON', r.stdout.endsWith('\n201') && r.stdout.includes('Ünïcode ✓'), r.stdout);
    r = curl(['-s', '-w', '\n%{http_code}', '-H', 'content-type: application/json', '--data', '{"title":', url + '/todos']);
    check('malformed JSON is 400', r.stdout.endsWith('\n400'), r.stdout);
    r = curl(['-v', url + '/health', url + '/todos/1']);
    check('keep-alive reuses one connection for two requests',
      /Re-using existing connection|reusing connection/i.test(r.stderr) && (r.stderr.match(/Connected to/g) ?? []).length === 1
        && /"ok": ?true/.test(r.stdout), r.stderr.split('\n').filter(line => /onnect|HTTP\//.test(line)).join('\n'));
    const payload = Buffer.from(Array.from({ length: 4096 }, (_, i) => i % 256));
    const echo = spawnSync('curl', ['-sS', '--max-time', '20', '-H', 'Transfer-Encoding: chunked', '--data-binary', '@-', url + '/echo'],
      { input: payload, timeout: 30_000 });
    check('chunked binary upload echoes exact bytes', echo.status === 0 && Buffer.compare(echo.stdout, payload) === 0, `${echo.stdout.length} bytes`);
    r = curl(['-i', '-N', url + '/events']);
    check('streamed events arrive chunked in order', /transfer-encoding: chunked/i.test(r.stdout)
      && /data: 0\n\ndata: 1\n\ndata: 2\n\n/.test(r.stdout.replace(/\r/g, '')), r.stdout.replace(/\r/g, '').slice(0, 500));
    const bad = await raw(url, 'GARBAGE / NOPE\r\n\r\n');
    check('malformed request line is rejected with 400', /^HTTP\/1\.1 400/.test(bad), bad.slice(0, 200));
    const response = await fetch(url + '/todos');
    const todos = await response.json();
    check('Node fetch lists the created todo', response.status === 200 && JSON.stringify(todos).includes('Ünïcode ✓'), JSON.stringify(todos).slice(0, 300));
    r = curl(['-s', '-X', 'POST', url + '/shutdown']);
    const exit = await new Promise(resolve => {
      const timer = setTimeout(() => resolve('timeout'), 10_000);
      server.child.once('exit', (code, signal) => { clearTimeout(timer); resolve(signal ?? code); });
    });
    check('POST /shutdown stops the server with status 0', exit === 0, String(exit));
  } finally { if (server.child.exitCode === null) server.child.kill('SIGKILL'); }
  return { kind, url, startupSeconds: server.startupSeconds, passed: checks.every(c => c.ok), checks, logs: server.logs() };
}

const results = [];
for (const kind of ['node', 'native']) results.push(await smoke(kind));
const report = { scope: 'Real-client smoke of examples/lean-server-latest: curl, a raw socket and Node fetch', curl: curlVersion,
  node: spawnSync(engine, ['--version'], { encoding: 'utf8' }).stdout.trim(), lean: manifest.lean, build: { wasm: manifest.wasm, linkDriver: manifest.linkDriver },
  results, passed: results.every(r => r.passed), recordedAt: new Date().toISOString() };
writeFileSync(outputFile, JSON.stringify(report, null, 2) + '\n');
for (const r of results) for (const c of r.checks) console.log(`${r.kind.padEnd(6)} ${c.ok ? 'ok  ' : 'FAIL'} ${c.name}${c.ok ? '' : ' :: ' + c.detail}`);
assert.ok(report.passed);
