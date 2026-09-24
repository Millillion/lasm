import test from 'node:test';
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { existsSync, readFileSync } from 'node:fs';
import { resolve } from 'node:path';

const engines = [
  ['node', process.execPath, []],
  ['deno', resolve(process.env.LASM_TEST_DENO ?? '.cache/js-runtimes/deno-2.9.7/deno'), ['run','-A']],
  ['bun', resolve(process.env.LASM_TEST_BUN ?? '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];
function processState(pid) {
  if (process.platform !== 'linux') return {};
  const result = {};
  for (const [name, path] of Object.entries({ status: `/proc/${pid}/status`,
    limits: `/proc/${pid}/limits`, wait: `/proc/${pid}/wchan`, corePattern: '/proc/sys/kernel/core_pattern' })) {
    try {
      const value = readFileSync(path, 'utf8');
      result[name] = name === 'status' ? value.split('\n').filter(line => /^(State|CoreDumping|Sig|VmRSS|Threads):?/.test(line)).join('\n') : value;
    } catch (error) { result[name] = error.code; }
  }
  return result;
}
for (const [name, engine, flags] of engines) {
  const available = process.platform !== 'win32' && existsSync(engine);
  if (process.env.LASM_REQUIRE_SIGNAL_ENGINES === '1' && !available) throw new Error('Required signal engine missing: ' + engine);
  for (const signal of ['SIGUSR1','SIGABRT']) for (const mode of ['default', 'stopped', 'watch', 'ignored', 'native', 'javascript']) {
    test(`${name} application ${signal} policy preserves ${mode} behavior`, { skip: !available, timeout: 15_000 }, async t => {
      const child = spawn(engine, [...flags, resolve('test/fixtures/application-signals.mjs'), mode, signal],
        { stdio: ['ignore','pipe','pipe'], env: { ...process.env, PATH: '', DENO_DISABLE_NODE_SHIM: '1' } });
      let stdout = '', stderr = '', sent = false, readyState;
      const timer = setTimeout(() => {
        t.diagnostic(JSON.stringify({ readyState, deadlineState: processState(child.pid) }));
        child.kill('SIGKILL');
      }, 10_000);
      try {
        const actual = await new Promise((resolve, reject) => {
          child.on('error', reject);
          child.stdout.on('data', bytes => {
            stdout += bytes;
            if (!sent && stdout.includes('ready\n')) {
              readyState = processState(child.pid); sent = true; child.kill(signal);
              if (mode === 'default') t.diagnostic(JSON.stringify({ engine: name, signal, readyState }));
            }
          });
          child.stderr.on('data', bytes => { stderr += bytes; if (stderr.length > 1024 * 1024) child.kill('SIGKILL'); });
          child.on('close', (code, signal) => resolve({ code, signal }));
        });
        assert.ok(sent, stderr);
        if (mode === 'default' || mode === 'stopped') {
          assert.deepEqual(actual, { code: null, signal }, stderr); assert.equal(stdout, 'ready\n');
        } else {
          assert.deepEqual(actual, { code: 0, signal: null }, stderr);
          const message = { watch: 'lean received', ignored: 'ignored', native: 'native received', javascript: 'javascript received' }[mode];
          assert.equal(stdout, 'ready\n' + message + '\n');
        }
        // Explicit preexisting JS subscriptions keep their caller's engine
        // policy, including Deno's independently subscribed inspector.
        if (mode !== 'javascript' || name !== 'deno' || signal !== 'SIGUSR1') assert.equal(stderr, '');
      } finally { clearTimeout(timer); if (child.exitCode === null && child.signalCode === null) child.kill('SIGKILL'); }
    });
  }
}
