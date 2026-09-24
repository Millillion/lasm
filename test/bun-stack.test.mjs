import test from 'node:test';
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { resolve, join } from 'node:path';
import { mkdtempSync, readFileSync, writeFileSync, rmSync, existsSync, openSync, closeSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';

const engine = resolve(process.env.LASM_TEST_BUN ?? '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun');
const enabled = process.platform === 'linux' && existsSync(engine);
if (process.env.LASM_REQUIRE_BUN_TESTS === '1' && !enabled)
  throw new Error('Required native Bun startup tests cannot locate a supported engine: ' + engine);
const fixture = resolve('test/fixtures/bun-stack.mjs');
const args = ['λ 日本語', '', 'a b', '--preload', '--maxPerThreadStackUsage=application-value'];
const env = { PATH: '', LD_PRELOAD: '', BUN_JSC_maxPerThreadStackUsage: '1048576',
  LASM_STACK_TEST_VALUE: 'line one\nline two=λ' };
const options = { skip: !enabled, timeout: 60_000 };
const execute = (mode, prepare, extra = [], source = fixture, overrides = {}) => {
  const child = spawnSync(engine, [...extra, source, mode, ...args], {
    env: { ...env, LASM_STACK_TEST_PREPARE: prepare ? '1' : '0' },
    input: Buffer.from('piped input\0λ\n'), encoding: 'utf8', timeout: 30_000, ...overrides });
  assert.ifError(child.error); return child;
};

test('Bun automatic stack setup fixes deep Wasm calls with no caller flags', options, () => {
  const baseline = execute('recurse', false), actual = execute('recurse', true);
  assert.equal(baseline.status, 0, baseline.stderr);
  assert.match(JSON.parse(baseline.stdout).error, /call stack|stack overflow/i);
  assert.equal(actual.status, 0, actual.stderr);
  assert.deepEqual(JSON.parse(actual.stdout), { value: 100_000 });
});

test('Bun restart preserves PID, environment, arguments, cwd and stdio', options, () => {
  const baseline = execute('stdio', false), actual = execute('stdio', true);
  assert.equal(actual.status, 29, actual.stderr);
  assert.equal(actual.stderr, baseline.stderr);
  const expected = JSON.parse(baseline.stdout), observed = JSON.parse(actual.stdout);
  assert.equal(observed.pid, actual.pid); assert.equal(expected.pid, baseline.pid);
  delete observed.pid; delete expected.pid;
  assert.deepEqual(observed, expected);
  assert.deepEqual(observed.args, args);
  assert.equal(observed.stdin, Buffer.from('piped input\0λ\n').toString('base64'));
});

test('Bun restarted process receives signals at its original PID', options, async () => {
  const child = spawn(engine, [fixture, 'signal'],
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

test('Bun initialization never repeats explicit preload or embedding effects', options, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-bun-startup-'));
  try {
    const record = join(directory, 'effects'), preload = join(directory, 'preload.mjs');
    const effect = `import {appendFileSync} from 'node:fs'; appendFileSync(${JSON.stringify(record)}, 'x');\n`;
    writeFileSync(preload, effect);
    for (const flag of ['--preload', '-r']) {
      const preloaded = execute('stdio', true, [flag, preload]);
      assert.equal(preloaded.status, 29, preloaded.stderr);
    }
    assert.equal(readFileSync(record, 'utf8'), 'xx');
    const wrapper = join(directory, 'wrapper.mjs');
    writeFileSync(wrapper, effect + `await import(${JSON.stringify(pathToFileURL(fixture).href)});\n`);
    const embedded = execute('stdio', true, [], wrapper);
    assert.equal(embedded.status, 29, embedded.stderr);
    assert.equal(readFileSync(record, 'utf8'), 'xxx');
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('Bun initialization preserves configured preload effects', options, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-bun-config-'));
  try {
    const record = join(directory, 'effects'), preload = join(directory, 'preload.mjs');
    writeFileSync(preload, `import {appendFileSync} from 'node:fs'; appendFileSync(${JSON.stringify(record)}, 'x');\n`);
    writeFileSync(join(directory, 'bunfig.toml'), 'preload = ["./preload.mjs"]\n');
    const result = execute('stdio', true, [], fixture, { cwd: directory });
    assert.equal(result.status, 29, result.stderr);
    assert.equal(readFileSync(record, 'utf8'), 'x');
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('Bun startup retains caller-owned descriptor 3', options, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-bun-descriptor-'));
  try {
    const path = join(directory, 'input'); writeFileSync(path, 'descriptor input λ');
    for (const prepare of [false, true]) {
      const fd = openSync(path, 'r');
      try {
        const actual = execute('descriptor', prepare, [], fixture, { stdio: ['pipe', 'pipe', 'pipe', fd] });
        assert.equal(actual.status, 0, actual.stderr);
        assert.equal(actual.stdout, 'descriptor input λ\n');
      } finally { closeSync(fd); }
    }
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('Bun startup retains native environment bytes and removes private transport', options, () => {
  const script = 'import os,sys; os.execve(os.fsencode(sys.argv[1]), [os.fsencode(sys.argv[1]), os.fsencode(sys.argv[2]), b"raw-environment"], {b"PATH":b"", b"RAW_VALUE":b"a\\xffb", b"RAW_KEY\\xfe":b"value", b"LASM_STACK_TEST_PREPARE":os.fsencode(sys.argv[3]), b"LASM_BUN_STACK_BYTES":b"original value", b"LD_PRELOAD":b""})';
  const results = [false, true].map(prepare => {
    const child = spawnSync(process.env.LASM_TEST_PYTHON ?? 'python3', ['-I', '-B', '-c', script, engine, fixture, prepare ? '1' : '0'],
      { encoding: 'utf8', timeout: 30_000, killSignal: 'SIGKILL' });
    assert.ifError(child.error); assert.equal(child.status, 0, child.stderr);
    return JSON.parse(child.stdout);
  });
  assert.deepEqual(results[1], results[0]);
  assert.ok(results[0].includes(Buffer.from([82,65,87,95,86,65,76,85,69,61,97,255,98]).toString('base64')));
});
