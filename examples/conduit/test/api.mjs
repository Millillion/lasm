// The official RealWorld API tests (specs/api/hurl at the pinned commit,
// test/realworld/PINNED), run unmodified with their own script against a
// fresh Conduit server.
//
//   node test/api.mjs                       # the Node build (npm run build first)
//   node test/api.mjs --url http://host:port # a server that is already running
//   node test/api.mjs --platform deno       # a platform of test/platforms.mjs, served by its own tooling
//   node test/api.mjs --command "bun bun/main.mjs"   # any other server command ({port}: its port)
//   node test/api.mjs ... --equivalence     # also record the traffic (for test/equivalence.mjs compare)
//
// Writes the pass counts to test-results/api-<name>.json; with --equivalence
// also the suite's traffic, raw (traffic-<name>.json) and normalized
// (realworld-<name>.json). --equivalence needs an empty store: it fixes the
// suite's uid (UID_VAL) so that names, slugs and ids are the same on every target.
import { spawn } from 'node:child_process';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { delimiter, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { normalize, startRecorder } from './equivalence.mjs';
import { baseUrl, startServer } from './platforms.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : undefined; };
const platform = option('--platform');
const name = option('--name') ?? platform ?? 'node';
const equivalence = args.includes('--equivalence');


const freePort = () => new Promise((resolve, reject) => {
  const server = createServer().listen(0, '127.0.0.1', () => {
    const { port } = server.address();
    server.close(() => resolve(port));
  }).on('error', reject);
});

async function waitFor(url, child, timeoutMs = 60_000) {
  const end = Date.now() + timeoutMs;
  while (Date.now() < end) {
    if (child && child.exitCode !== null) throw new Error(`the server exited with code ${child.exitCode}`);
    try { if ((await fetch(url)).ok) return; } catch {}
    await new Promise(r => setTimeout(r, 250));
  }
  throw new Error(`no answer from ${url} within ${timeoutMs / 1000} s`);
}

let child;
let work;
let server;
let base = option('--url');
let recorder;
try {
  if (!base && platform) {
    const port = await freePort();
    server = startServer(platform, port);
    child = server.child;
    base = baseUrl(platform, port);
  } else if (!base) {
    const port = await freePort();
    work = mkdtempSync(join(tmpdir(), 'conduit-api-'));
    // {port} in a command is replaced by the port (wrangler dev takes it as an option).
    const command = (option('--command') ?? `node ${JSON.stringify(join(root, 'dist/server/main.mjs'))}`)
      .replaceAll('{port}', String(port));
    child = spawn(command, {
      shell: true, cwd: root, stdio: ['ignore', 'inherit', 'inherit'], detached: process.platform !== 'win32',
      env: { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(work, 'conduit.db') },
    });
    base = `http://127.0.0.1:${port}`;
  }
  // Container images and function emulators can take minutes to pull and start.
  await waitFor(`${base}/api/tags`, child, 600_000);
  // The suite's requests only (not the readiness probe), through the recorder.
  if (equivalence) recorder = await startRecorder(base);
  // The official runner (bash, hurl from node_modules/.bin), asynchronous: the
  // recorder runs in this process.
  const run = await new Promise((resolve, reject) => {
    const hurl = spawn('bash', [join(root, 'test/realworld/specs/api/run-api-tests-hurl.sh')], {
      cwd: root, stdio: ['ignore', 'pipe', 'pipe'],
      env: {
        ...process.env, HOST: recorder?.url ?? base, PATH: [join(root, 'node_modules/.bin'), process.env.PATH].join(delimiter),
        ...(equivalence ? { UID_VAL: process.env.UID_VAL ?? 'equivalence' } : {}),
      },
    });
    let stdout = '', stderr = '';
    hurl.stdout.on('data', d => { stdout += d; });
    hurl.stderr.on('data', d => { stderr += d; });
    hurl.on('error', reject);
    hurl.on('close', status => resolve({ status, stdout, stderr }));
  });
  process.stdout.write(run.stdout);
  process.stderr.write(run.stderr);
  const count = label => Number((run.stdout + run.stderr).match(new RegExp(`${label}:\\s+(\\d+)`))?.[1] ?? NaN);
  const result = {
    target: name, url: base, status: run.status,
    files: count('Executed files'), requests: count('Executed requests'),
    succeededFiles: count('Succeeded files'), failedFiles: count('Failed files'),
    suite: 'gothinkster/realworld specs/api/hurl (test/realworld/PINNED)',
  };
  mkdirSync(join(root, 'test-results'), { recursive: true });
  writeFileSync(join(root, `test-results/api-${name}.json`), JSON.stringify(result, null, 2) + '\n');
  console.log(`\nRealWorld API tests (${name}): ${result.succeededFiles}/${result.files} files, ${result.requests} requests` +
    (run.status === 0 ? ', all passed' : ', FAILED'));
  process.exitCode = run.status === 0 && result.failedFiles === 0 ? 0 : 1;
  if (recorder) {
    await recorder.close();
    const traffic = normalize(recorder.exchanges);
    writeFileSync(join(root, `test-results/traffic-${name}.json`), JSON.stringify({ target: name, exchanges: recorder.exchanges }, null, 2) + '\n');
    writeFileSync(join(root, `test-results/realworld-${name}.json`), JSON.stringify(traffic, null, 2) + '\n');
  }
} finally {
  await recorder?.close().catch(() => {});
  server?.stop();
  // The whole process group: the shell and the server it started.
  if (child && child.exitCode === null) { try { process.kill(-child.pid, 'SIGTERM'); } catch { child.kill('SIGTERM'); } }
  if (work) rmSync(work, { recursive: true, force: true });
}
