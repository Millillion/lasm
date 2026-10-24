// Built applications under Node exec flags (scripts/full-lean/emscripten-pre.js):
// per-process V8/Node options such as --max-old-space-size used to make every
// pthread Worker throw ERR_WORKER_INVALID_EXEC_ARGV.
//
//   node integration/node-exec-flags.mjs OUTPUT [--dist BUILT_DIST] [--runtime DIR] [--node PATH]... [--no-network]
//
// Without --dist, builds integration/fixtures/exec-flags with this source tree.
// Each --node (default: this Node) runs the program and the Std.Http server
// under every flag set; output must equal the run without flags. --no-network
// skips the server and the --inspect sets, for sandboxes that deny sockets or the
// time zone files that Std.Http's Date header reads (installed acceptance).
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawn, spawnSync } from 'node:child_process';
import { connect, createServer } from 'node:net';
import { fileURLToPath } from 'node:url';

const args = process.argv.slice(2);
const values = name => args.flatMap((arg, i) => arg === name ? [args[i + 1]] : []);
const output = resolve(args[0] ?? '');
assert.ok(args[0] && !existsSync(output), 'Supply a new output directory');
mkdirSync(output, { recursive: true });
let dist = values('--dist')[0] && resolve(values('--dist')[0]);
if (!dist) {
  const { buildApplication } = await import('../src/application-build.mjs');
  const project = join(output, 'project');
  cpSync(fileURLToPath(new URL('./fixtures/exec-flags', import.meta.url)), project, { recursive: true });
  if (values('--runtime')[0]) {
    const { hashFile } = await import('../src/managed-artifacts.mjs');
    const { applicationRuntimeCatalog } = await import('../src/application-runtime.mjs');
    const directory = resolve(values('--runtime')[0]);
    applicationRuntimeCatalog.lean['4.35.0'] = { name: 'lean-4.35.0-wasm64', manifestSha256: await hashFile(join(directory, 'target.json')) };
  }
  dist = join(output, 'dist');
  await buildApplication(join(project, 'Main.lean'), { target: 'node', output: dist, log: () => {},
    runtimeDirectory: values('--runtime')[0] && resolve(values('--runtime')[0]) });
}
const network = !args.includes('--no-network');
const nodes = values('--node').length ? values('--node').map(path => resolve(path)) : [process.execPath];
const flagSets = [[], ['--max-old-space-size=2048'], ['--stack-size=2000'], ['--expose-gc'], ['--enable-source-maps'],
  ['--inspect=0'], ['--trace-warnings'], ['--no-warnings'], ['--title', 'lasm-exec-flags'],
  ['--max-old-space-size=2048', '--expose-gc', '--no-warnings'],
  ['--max-old-space-size=1536', '--stack-size=2000', '--expose-gc', '--enable-source-maps', '--trace-warnings', '--max-semi-space-size=16'],
  ['--inspect=0', '--max-old-space-size=2048', '--expose-gc']];
const freePort = () => new Promise((done, fail) => { const s = createServer(); s.on('error', fail);
  s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
// One HTTP/1.1 GET over a plain socket: no fetch/undici, so no proxy or
// environment-dependent client behaviour; errors keep their code.
const get = port => new Promise((resolve, reject) => {
  const socket = connect({ host: '127.0.0.1', port });
  let data = '';
  socket.setTimeout(20_000, () => socket.destroy(new Error('HTTP request timed out')));
  socket.on('connect', () => socket.write(`GET / HTTP/1.1\r\nHost: 127.0.0.1:${port}\r\nConnection: close\r\n\r\n`));
  socket.on('data', chunk => { data += chunk; });
  socket.on('error', error => reject(new Error(`${error.code ?? ''} ${error.message}`.trim())));
  socket.on('close', () => {
    const [head, ...rest] = data.split('\r\n\r\n'), body = rest.join('\r\n\r\n');
    const status = Number(/^HTTP\/1\.[01] (\d{3})/.exec(head)?.[1]);
    if (!status) return reject(new Error(`No HTTP response: ${JSON.stringify(data.slice(0, 200))}`));
    // A chunked body: keep the payload of its first chunk.
    const chunked = /\r\ntransfer-encoding: *chunked/i.test(head) ? /^[0-9a-f]+\r\n([\s\S]*?)\r\n/i.exec(body)?.[1] : undefined;
    resolve({ status, body: chunked ?? body });
  });
});
async function serve(node, flags) {
  const port = await freePort();
  const child = spawn(node, [...flags, join(dist, 'main.mjs'), 'serve'], { cwd: dist, env: { ...process.env, PORT: String(port) }, stdio: ['ignore', 'pipe', 'pipe'] });
  let stdout = '', stderr = '';
  child.stdout.on('data', data => { stdout += data; }); child.stderr.on('data', data => { stderr += data; });
  try {
    const deadline = Date.now() + 60_000;
    while (!stdout.includes('Listening on') && child.exitCode === null && Date.now() < deadline) await new Promise(r => setTimeout(r, 100));
    assert.ok(stdout.includes('Listening on'), `server did not start: ${stderr.slice(-2000)}`);
    const response = await get(port).catch(error => {
      throw new Error(`${error.message}; server stdout ${JSON.stringify(stdout.slice(-500))} stderr ${JSON.stringify(stderr.slice(-1500))} exit ${child.exitCode}`);
    });
    return { ...response, stderr: stderr.replace(/Debugger listening on .*\n|For help, see: .*\n/g, '') };
  } finally { child.kill('SIGKILL'); }
}
const results = [];
let baseline;
for (const node of nodes) {
  const version = spawnSync(node, ['--version'], { encoding: 'utf8' }).stdout.trim();
  for (const flags of flagSets.filter(flags => network || !flags.some(flag => flag.startsWith('--inspect')))) {
    const run = spawnSync(node, [...flags, join(dist, 'main.mjs')], { cwd: dist, encoding: 'utf8', timeout: 120_000 });
    // --inspect prints its banner on stderr; nothing else may appear.
    const stderr = (run.stderr ?? '').replace(/Debugger listening on .*\n|For help, see: .*\n/g, '');
    const program = { code: run.status, signal: run.signal, stdout: run.stdout, stderr };
    baseline ??= program;
    let server, serverError;
    if (network) try { server = await serve(node, flags); } catch (error) { serverError = [error.message, error.cause?.code, error.cause?.message].filter(Boolean).join(': '); }
    const passed = program.code === 0 && program.stderr === '' && program.stdout === baseline.stdout
      && (!network || server?.status === 200 && server.body === '{"ok":true}' && server.stderr === '');
    results.push({ node: version, flags, passed, program, server, serverError });
    console.log(`${passed ? 'PASS' : 'FAIL'} node ${version} ${flags.join(' ') || '(no flags)'}${passed ? '' : `: ${JSON.stringify({ program, server, serverError }).slice(0, 600)}`}`);
  }
}
const result = { scope: 'Built Lasm application under Node exec flags', dist, network, passed: results.every(r => r.passed), results };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
if (!result.passed) process.exitCode = 1;
