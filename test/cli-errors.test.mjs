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

test('a failed step reports both streams: a Lake notice on stderr does not hide the Lean error on stdout (#315)', () => {
  const notice = 'info: Cli: remote URL changed\n  old: https://github.com/leanprover/lean4-cli.git\n  new: https://github.com/leanprover/lean4-cli\n';
  const lean = "Main.lean:2:33: error: Unknown identifier `undefinedName`\n";
  const failed = (stderr, stdout) => Object.assign(new Error(`Command failed: lake lean Main.lean\n${stderr}`), { status: 1, stderr, stdout });
  const shown = captured(failed(notice, lean));
  assert.match(shown, /info: Cli: remote URL changed/);
  assert.match(shown, /Main\.lean:2:33: error: Unknown identifier `undefinedName`/);
  assert.ok(shown.indexOf('remote URL changed') < shown.indexOf('Unknown identifier'), 'the notice, then the error');
  assert.match(shown, /\[lasm\] Build failed\. Fix the error above and run the command again\.$/);
  // Any stderr at all, even a blank line, used to hide stdout.
  assert.match(captured(failed('\n', lean)), /Unknown identifier `undefinedName`[\s\S]*Build failed/);
  // The same text on both streams is printed once.
  assert.equal(captured(failed(lean, lean)).match(/Unknown identifier/g).length, 1);
  // Only stderr (errors in imported modules): unchanged.
  assert.match(captured(failed('Helper.lean:1:25: error: type mismatch\n', '')), /Helper\.lean:1:25: error: type mismatch[\s\S]*Build failed/);
  // Nothing printed: the error's message.
  assert.match(captured(Object.assign(new Error('Lake could not load the workspace'), { stderr: '', stdout: '' })), /Lake could not load the workspace/);
});

test('lasm --version', async () => {
  for (const flag of ['--version', '-v']) assert.deepEqual(parseLasmArguments([flag]), { command: 'version' });
  assert.match(await versionText(), /^lasm \d+\.\d+\.\d+\S* \(@lasm\/\S+; Lean 4\.\d+\.\d+; (?:Node|Bun|Deno) \S+; [a-z0-9]+-[a-z0-9]+\)$/);
});
