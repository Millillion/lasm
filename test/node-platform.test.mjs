import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { join } from 'node:path';
import { buildMain } from '../src/main.mjs';
import { root } from '../src/toolchain.mjs';
import { instantiate } from '../src/runtime.mjs';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

const { output } = await buildMain(join(root, 'test/fixtures/node-platform/Main.lean'));
const bytes = await readFile(join(output, 'module.wasm'));
const manifest = JSON.parse(await readFile(join(output, 'manifest.json'), 'utf8'));

// Controlled initialization of one portable artifact. This exercises Lean's
// platform-dependent paths/date code, not the native OS filesystem or sockets.
for (const [platform, windows, mac] of [[0, false, false], [1, true, false], [2, false, true]]) {
  test(`ordinary Lean paths and UTC dates follow host platform ${platform}`, async () => {
    let stdout = '';
    const host = createNodeRuntimeHost({ stdio: { stdout: bytes => { stdout += Buffer.from(bytes); } } });
    host.platform = platform;
    const api = await instantiate(bytes, manifest, { nodeRuntime: host });
    const before = Date.now();
    try { assert.equal(await api.runMain(), 0); }
    finally { api.dispose(); }
    const lines = stdout.trimEnd().split('\n');
    assert.equal(lines[0], `windows=${windows};mac=${mac};bits=32`);
    assert.equal(lines[1], windows ? 'data\\todos.json' : 'data/todos.json');
    assert.equal(lines[2], String(windows));
    assert.equal(lines[3], windows ? 'C:\\data' : 'none');
    const timestamp = Date.parse(lines[4]);
    assert.ok(timestamp >= before - 1000 && timestamp <= Date.now(), lines[4]);
    assert.deepEqual(lines.slice(5), windows ? ['named zone unsupported'] : []);
  });
}

test('Node supplies its actual operating system to Lean', () => {
  const host = createNodeRuntimeHost();
  try { assert.equal(host.platform, process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0); }
  finally { host.close(); }
});
