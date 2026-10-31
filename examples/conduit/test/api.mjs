// The official RealWorld API tests (specs/api/hurl at the pinned commit,
// test/realworld/PINNED), run unmodified with their own script against a
// fresh Conduit server.
//
//   node test/api.mjs                       # the Node build (npm run build first)
//   node test/api.mjs --url http://host:port # a server that is already running
//   node test/api.mjs --platform deno       # a platform of test/platforms.mjs, served by its own tooling
//   node test/api.mjs --command "bun bun/main.mjs"   # any other server command ({port}: its port)
//
// Writes the pass counts to test-results/api-<name>.json.
import { spawn, spawnSync } from 'node:child_process';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { delimiter, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { startServer } from './platforms.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : undefined; };
const platform = option('--platform');
const name = option('--name') ?? platform ?? 'node';

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
try {
  if (!base && platform) {
    const port = await freePort();
    server = startServer(platform, port);
    child = server.child;
    base = `http://127.0.0.1:${port}`;
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
  // The official runner (bash, hurl from node_modules/.bin).
  const run = spawnSync('bash', [join(root, 'test/realworld/specs/api/run-api-tests-hurl.sh')], {
    cwd: root, encoding: 'utf8',
    env: { ...process.env, HOST: base, PATH: [join(root, 'node_modules/.bin'), process.env.PATH].join(delimiter) },
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
} finally {
  server?.stop();
  // The whole process group: the shell and the server it started.
  if (child && child.exitCode === null) { try { process.kill(-child.pid, 'SIGTERM'); } catch { child.kill('SIGTERM'); } }
  if (work) rmSync(work, { recursive: true, force: true });
}
