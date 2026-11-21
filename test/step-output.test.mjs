// A failed step's output is both of its streams, each once (issue #315).
import test from 'node:test';
import assert from 'node:assert/strict';
import { stepOutput } from '../src/step-output.mjs';

const notice = 'info: Cli: remote URL changed\n  old: https://github.com/leanprover/lean4-cli.git\n  new: https://github.com/leanprover/lean4-cli\n';
const leanError = 'Main.lean:2:33: error: Unknown identifier `undefinedName`\n';

test('stderr, then stdout', () => {
  assert.equal(stepOutput({ stderr: notice, stdout: leanError }), notice.trim() + '\n' + leanError.trim());
  assert.equal(stepOutput({ stderr: Buffer.from(notice), stdout: Buffer.from(leanError) }), notice.trim() + '\n' + leanError.trim());
});

test('one stream alone, or nothing', () => {
  assert.equal(stepOutput({ stdout: leanError }), leanError.trim());
  assert.equal(stepOutput({ stderr: leanError, stdout: '' }), leanError.trim());
  assert.equal(stepOutput({ stderr: '\n', stdout: leanError }), leanError.trim(), 'a blank stderr adds nothing');
  assert.equal(stepOutput({ stderr: '', stdout: '  \n' }), '');
  assert.equal(stepOutput({}), '');
  assert.equal(stepOutput(undefined), '');
});

test('the same text is shown once', () => {
  assert.equal(stepOutput({ stderr: leanError, stdout: leanError }), leanError.trim());
  assert.equal(stepOutput({ stderr: leanError.replace('\n', '\r\n'), stdout: leanError }), leanError.trim());
  // One stream holds the other's text and more: the fuller one only.
  assert.equal(stepOutput({ stderr: leanError, stdout: notice + leanError }), (notice + leanError).trim());
  assert.equal(stepOutput({ stderr: notice + leanError, stdout: leanError }), (notice + leanError).trim());
});
