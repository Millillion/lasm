// Regression (integration/host-fixtures.mjs cwd-permissions): a Worker with a
// `--require` preload never starts in a working directory that exists but
// cannot be searched (Node reads the cwd's package.json first). Lasm's file and
// thread workers leave the preload out there; it stays for a removed cwd.
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdtempSync, realpathSync, rmSync, chmodSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';

const pool = pathToFileURL(new URL('../src/native-file-worker-pool.mjs', import.meta.url).pathname).href;
const preload = new URL('../src/native-worker-cwd.cjs', import.meta.url).pathname;

test('workers start in an unsearchable, a removed and an ordinary cwd', { skip: process.platform === 'win32' || process.getuid?.() === 0 }, t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-worker-cwd-')));
  t.after(() => { try { chmodSync(join(base, 'cwd'), 0o700); } catch {} rmSync(base, { recursive: true, force: true }); });
  writeFileSync(join(base, 'worker.cjs'), "require('node:worker_threads').parentPort.postMessage('started in ' + typeof process.cwd())");
  // Each mode in its own process: it changes that process's cwd.
  const script = `import { Worker } from 'node:worker_threads';
import { mkdirSync, chmodSync, rmSync } from 'node:fs';
import { workerCwdPreload } from ${JSON.stringify(pool)};
const [mode, base, preload] = process.argv.slice(2);
mkdirSync(base + '/cwd'); process.chdir(base + '/cwd');
if (mode === 'unsearchable') chmodSync('.', 0); else if (mode === 'removed') rmSync(base + '/cwd', { recursive: true });
const execArgv = workerCwdPreload(preload);
const worker = new Worker(base + '/worker.cjs', { execArgv });
worker.on('message', message => { console.log(JSON.stringify({ message, execArgv })); worker.terminate(); });
worker.on('error', error => { console.log(JSON.stringify({ error: error.code ?? error.message, execArgv })); });
`;
  writeFileSync(join(base, 'start.mjs'), script);
  for (const [mode, preloaded] of [['unsearchable', false], ['removed', true], ['ordinary', true]]) {
    try { chmodSync(join(base, 'cwd'), 0o700); } catch {}
    rmSync(join(base, 'cwd'), { recursive: true, force: true });
    const result = spawnSync(process.execPath, [join(base, 'start.mjs'), mode, base, preload], { encoding: 'utf8', timeout: 20_000 });
    assert.equal(result.status, 0, result.stderr);
    const outcome = JSON.parse(result.stdout);
    assert.equal(outcome.error, undefined, `${mode}: ${outcome.error}`);
    assert.equal(outcome.message, 'started in string', mode);
    assert.deepEqual(outcome.execArgv, preloaded ? ['--require', preload] : [], mode);
  }
});
