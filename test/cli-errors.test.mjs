// Internal errors point at the bug report form; Lean diagnostics and the errors
// Lasm reports on purpose do not (0.3.1). `lasm --version` names what to report.
import test from 'node:test';
import assert from 'node:assert/strict';
import { isInternalError, reportCliError, bugReportLine, bugReportUrl, versionText } from '../src/application-cli.mjs';
import { parseLasmArguments } from '../src/cli-arguments.mjs';

const captured = error => {
  const lines = [], original = console.error;
  console.error = (...args) => lines.push(args.join(' '));
  try { reportCliError(error); } finally { console.error = original; }
  return lines.join('\n');
};

test('internal errors are programming errors or marked lasmInternal', () => {
  assert.ok(isInternalError(new TypeError('x is undefined')));
  assert.ok(isInternalError(Object.assign(new Error('bad'), { code: 'ERR_ASSERTION' })));
  assert.ok(isInternalError(Object.assign(new Error('from the build worker'), { name: 'TypeError' })));
  assert.ok(isInternalError(Object.assign(new Error('marked'), { lasmInternal: true })));
  assert.ok(!isInternalError(new Error('Usage: lasm editor [project-directory]')));
  assert.ok(!isInternalError(Object.assign(new TypeError('opted out'), { lasmInternal: false })));
  assert.ok(!isInternalError(Object.assign(new Error('uncaught'), { name: 'LeanIOError' })));
  assert.ok(!isInternalError(undefined));
});

test('the bug report line follows internal errors only', () => {
  assert.equal(bugReportUrl, 'https://github.com/Millillion/lasm/issues/new?template=bug.yml');
  assert.ok(captured(new TypeError('Cannot read properties of undefined')).includes(bugReportLine));
  assert.ok(!captured(new Error('This Lake project needs Git (Reservoir dependency batteries)')).includes(bugReportLine));
  const lean = Object.assign(new Error('build failed'), { stderr: 'error: Main.lean:3:4: unknown identifier \'foo\'\nerror: build failed\n' });
  assert.ok(!captured(lean).includes(bugReportLine), 'Lean diagnostics never ask for a bug report');
  assert.ok(!captured(Object.assign(new Error('boom'), { name: 'LeanIOError' })).includes(bugReportLine));
});

test('lasm --version', async () => {
  for (const flag of ['--version', '-v', 'version']) assert.deepEqual(parseLasmArguments([flag]), { command: 'version' });
  assert.match(await versionText(), /^lasm \d+\.\d+\.\d+\S* \(@lasm\/\S+; Lean 4\.\d+\.\d+; (?:Node|Bun|Deno) \S+; [a-z0-9]+-[a-z0-9]+\)$/);
});
