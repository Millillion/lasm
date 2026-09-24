import test from 'node:test';
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { resolve, join } from 'node:path';
import { mkdtempSync, readFileSync, writeFileSync, rmSync, existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';

const engine = resolve(process.env.LASM_TEST_DENO ?? '.cache/js-runtimes/deno-2.9.7/deno');
const enabled = ['linux', 'darwin'].includes(process.platform) && existsSync(engine);
if (process.env.LASM_REQUIRE_DENO_TESTS === '1' && !enabled)
  throw new Error('Required native Deno startup tests cannot locate a supported engine: ' + engine);
const fixture = resolve('test/fixtures/deno-stack.mjs');
const args = ['λ 日本語', '', 'a b', '--target', '--v8-flags=application-value'];
const env = { PATH: '', DENO_DISABLE_NODE_SHIM: '1', DENO_V8_FLAGS: '--max-old-space-size=128,--random-seed=123',
  LASM_STACK_TEST_VALUE: 'line one\nline two=λ' };
const permissions = ['run', '--no-config', '--no-lock', '--allow-read', '--allow-env',
  '--allow-ffi', '--allow-sys', '--deny-net', '--deny-run'];
const options = { skip: !enabled, timeout: 60_000 };
const execute = (mode, prepare, extra = [], source = fixture) => {
  const child = spawnSync(engine, [...permissions, ...extra, source, mode, ...args], {
    env: { ...env, LASM_STACK_TEST_PREPARE: prepare ? '1' : '0' },
    input: Buffer.from('piped input\0λ\n'), encoding: 'utf8', timeout: 30_000 });
  assert.ifError(child.error); return child;
};

test('Deno automatic stack setup fixes deep Wasm calls with no caller flags', options, () => {
  const baseline = execute('recurse', false), actual = execute('recurse', true);
  assert.equal(baseline.status, 0, baseline.stderr);
  assert.match(JSON.parse(baseline.stdout).error, /call stack|stack overflow/i);
  assert.equal(actual.status, 0, actual.stderr);
  assert.deepEqual(JSON.parse(actual.stdout), { value: 100_000 });
});

test('Deno restart preserves PID, restricted permissions, environment, arguments and stdio', options, () => {
  const baseline = execute('stdio', false), actual = execute('stdio', true);
  assert.equal(actual.status, 29, actual.stderr);
  assert.equal(actual.stderr, baseline.stderr);
  const expected = JSON.parse(baseline.stdout), observed = JSON.parse(actual.stdout);
  assert.equal(observed.pid, actual.pid); assert.equal(expected.pid, baseline.pid);
  delete observed.pid; delete expected.pid;
  assert.deepEqual(observed, expected);
  assert.deepEqual(observed.args, args);
  assert.deepEqual(observed.permissions, { net: 'denied', run: 'denied' });
  assert.equal(observed.stdin, Buffer.from('piped input\0λ\n').toString('base64'));
});

test('Deno restarted process receives signals at its original PID', options, async () => {
  const child = spawn(engine, [...permissions, fixture, 'signal'],
    { env: { ...env, LASM_STACK_TEST_PREPARE: '1' }, stdio: ['ignore', 'pipe', 'pipe'] });
  let diagnostic = ''; child.stderr.on('data', bytes => { diagnostic += bytes; });
  const timer = setTimeout(() => child.kill('SIGKILL'), 25_000);
  try {
    const result = await new Promise((resolve, reject) => {
      child.on('error', reject);
      child.stdout.once('data', bytes => {
        try { assert.equal(Number(bytes.toString().trim()), child.pid); child.kill('SIGTERM'); }
        catch (error) { reject(error); child.kill('SIGKILL'); }
      });
      child.on('close', (code, signal) => resolve({ code, signal }));
    });
    assert.deepEqual(result, { code: null, signal: 'SIGTERM' }, diagnostic);
  } finally { clearTimeout(timer); if (child.exitCode === null && child.signalCode === null) child.kill('SIGKILL'); }
});

test('Deno initialization never repeats preload or embedding side effects', options, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-deno-startup-'));
  try {
    const record = join(directory, 'effects'), preload = join(directory, 'preload.mjs');
    const effect = `import {appendFileSync} from 'node:fs'; appendFileSync(${JSON.stringify(record)}, 'x');\n`;
    writeFileSync(preload, effect);
    const preloaded = execute('stdio', true, ['--allow-write', '--preload', preload]);
    assert.equal(preloaded.status, 29, preloaded.stderr);
    assert.equal(readFileSync(record, 'utf8'), 'x');
    const wrapper = join(directory, 'wrapper.mjs');
    writeFileSync(wrapper, effect + `await import(${JSON.stringify(pathToFileURL(fixture).href)});\n`);
    const embedded = execute('stdio', true, ['--allow-write'], wrapper);
    assert.equal(embedded.status, 29, embedded.stderr);
    assert.equal(readFileSync(record, 'utf8'), 'xx');
  } finally { rmSync(directory, { recursive: true, force: true }); }
});
