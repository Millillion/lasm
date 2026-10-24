// Built applications under Node exec flags (scripts/full-lean/emscripten-pre.js):
// per-process V8/Node options such as --max-old-space-size used to make every
// pthread Worker throw ERR_WORKER_INVALID_EXEC_ARGV.
//
//   node integration/node-exec-flags.mjs OUTPUT [--dist BUILT_DIST] [--runtime DIR] [--node PATH]...
//
// Without --dist, builds integration/fixtures/exec-flags with this source tree.
// Each --node (default: this Node) runs the program and the Std.Http server
// under every flag set; output must equal the run without flags.
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawn, spawnSync } from 'node:child_process';
import { createServer } from 'node:net';
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
const nodes = values('--node').length ? values('--node').map(path => resolve(path)) : [process.execPath];
const flagSets = [[], ['--max-old-space-size=2048'], ['--stack-size=2000'], ['--expose-gc'], ['--enable-source-maps'],
  ['--inspect=0'], ['--trace-warnings'], ['--no-warnings'], ['--title', 'lasm-exec-flags'],
  ['--max-old-space-size=2048', '--expose-gc', '--no-warnings'],
  ['--max-old-space-size=1536', '--stack-size=2000', '--expose-gc', '--enable-source-maps', '--trace-warnings', '--max-semi-space-size=16'],
  ['--inspect=0', '--max-old-space-size=2048', '--expose-gc']];
const freePort = () => new Promise((done, fail) => { const s = createServer(); s.on('error', fail);
  s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
async function serve(node, flags) {
  const port = await freePort();
  const child = spawn(node, [...flags, join(dist, 'main.mjs'), 'serve'], { cwd: dist, env: { ...process.env, PORT: String(port) }, stdio: ['ignore', 'pipe', 'pipe'] });
  let stdout = '', stderr = '';
  child.stdout.on('data', data => { stdout += data; }); child.stderr.on('data', data => { stderr += data; });
  try {
    const deadline = Date.now() + 60_000;
    while (!stdout.includes('Listening on') && child.exitCode === null && Date.now() < deadline) await new Promise(r => setTimeout(r, 100));
    assert.ok(stdout.includes('Listening on'), `server did not start: ${stderr.slice(-2000)}`);
    const response = await fetch(`http://127.0.0.1:${port}/`, { signal: AbortSignal.timeout(20_000) });
    return { status: response.status, body: await response.text(), stderr: stderr.replace(/Debugger listening on .*\n|For help, see: .*\n/g, '') };
  } finally { child.kill('SIGKILL'); }
}
const results = [];
let baseline;
for (const node of nodes) {
  const version = spawnSync(node, ['--version'], { encoding: 'utf8' }).stdout.trim();
  for (const flags of flagSets) {
    const run = spawnSync(node, [...flags, join(dist, 'main.mjs')], { cwd: dist, encoding: 'utf8', timeout: 120_000 });
    // --inspect prints its banner on stderr; nothing else may appear.
    const stderr = (run.stderr ?? '').replace(/Debugger listening on .*\n|For help, see: .*\n/g, '');
    const program = { code: run.status, signal: run.signal, stdout: run.stdout, stderr };
    baseline ??= program;
    let server, serverError;
    try { server = await serve(node, flags); } catch (error) { serverError = error.message; }
    const passed = program.code === 0 && program.stderr === '' && program.stdout === baseline.stdout
      && server?.status === 200 && server.body === '{"ok":true}' && server.stderr === '';
    results.push({ node: version, flags, passed, program, server, serverError });
    console.log(`${passed ? 'PASS' : 'FAIL'} node ${version} ${flags.join(' ') || '(no flags)'}${passed ? '' : `: ${JSON.stringify({ program, server, serverError }).slice(0, 600)}`}`);
  }
}
const result = { scope: 'Built Lasm application under Node exec flags', dist, passed: results.every(r => r.passed), results };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
if (!result.passed) process.exitCode = 1;
