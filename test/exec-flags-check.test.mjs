import test from 'node:test';
import assert from 'node:assert/strict';
import { failedChecks, withoutInspectorBanner } from '../integration/exec-flags-check.mjs';

const banner = 'Debugger listening on ws://127.0.0.1:9229/6c1c0f1e-0f6f-4f9a-9d0e-1a2b3c4d5e6f\r\nFor help, see: https://nodejs.org/learn/getting-started/debugging\r\n';
const ok = { status: 200, body: '{"ok":true}' };

test('the inspector banner is accepted with CRLF (Windows) and LF line endings', () => {
  for (const stderr of [banner, banner.replaceAll('\r\n', '\n')]) {
    assert.equal(withoutInspectorBanner(stderr), '');
    assert.deepEqual(failedChecks({ program: { code: 0, stdout: 'x\r\n', stderr }, server: { ...ok, stderr },
      baselineStdout: 'x\n', network: true }), []);
  }
});

test('each failed assertion is named', () => {
  assert.deepEqual(failedChecks({ program: { code: 1, stdout: 'y\n', stderr: banner + 'Error: boom\r\n' },
    server: { status: 500, body: 'no', stderr: '' }, baselineStdout: 'x\n', network: true }),
  ['program exit code 1', 'program stderr "Error: boom\\n"', 'program stdout differs from the run without flags', 'server status 500', 'server body "no"']);
  assert.deepEqual(failedChecks({ program: { code: 0, stdout: 'x\n', stderr: '' }, serverError: 'ECONNRESET socket hang up',
    baselineStdout: 'x\n', network: true }), ['server: ECONNRESET socket hang up']);
  assert.deepEqual(failedChecks({ program: { code: 0, stdout: 'x\n', stderr: '' }, baselineStdout: 'x\n', network: false }), []);
});
