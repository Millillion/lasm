// Claim 4: errors a user can trigger print a clear message, never a stack
// trace (docs/TESTING.md#error-corpus). The black-box corpus is
// scripts/tooling/error-corpus.mjs; these are the regression tests of the bugs
// it found, at the lowest layer that shows them, and of its own judge.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, chmodSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { mkdir } from 'node:fs/promises';
import { describeFileSystemError, reportCliError } from '../src/application-cli.mjs';
import { withApplicationLock } from '../src/application-lock.mjs';
import { initProject } from '../src/init.mjs';
import { deliverOutput } from '../src/application-files.mjs';
import { assertDefinesMain } from '../src/application-sources.mjs';
import { messageProblems } from '../scripts/tooling/lib.mjs';

const posixUser = process.platform !== 'win32' && process.getuid?.() !== 0;
const scratch = t => { const d = mkdtempSync(join(tmpdir(), 'lasm-cli-messages-')); t.after(() => { try { chmodSync(d, 0o755); } catch {} rmSync(d, { recursive: true, force: true }); }); return d; };
const reported = error => {
  const lines = [], original = console.error;
  console.error = (...args) => lines.push(args.join(' '));
  try { reportCliError(error); } finally { console.error = original; }
  return lines.join('\n');
};
const nodeError = async action => { try { await action(); } catch (error) { return error; } assert.fail('expected a failure'); };

test('the corpus judge: stack traces, raw errors and bare system messages are problems; clear messages are not', () => {
  const stack = new TypeError('x is undefined').stack;
  assert.ok(messageProblems(stack).includes('prints a JavaScript stack trace'));
  assert.ok(messageProblems('    at async Promise.all (index 0)').includes('prints a JavaScript stack trace'));
  assert.ok(messageProblems('    at C:\\lasm\\src\\x.mjs:1:2').includes('prints a JavaScript stack trace'));
  assert.ok(messageProblems("ENOTDIR: not a directory, scandir '/x/Main.lean'").some(p => /raw file-system/.test(p)));
  assert.ok(messageProblems('[lasm] Verifying\nPermission denied\n').some(p => /bare system error/.test(p)));
  assert.ok(messageProblems('').includes('printed nothing'));
  // Found by fault injection (a full disk during the build): no path at all.
  assert.ok(messageProblems('ENOSPC: no space left on device, write').some(p => /raw file-system/.test(p)));
  assert.ok(messageProblems('If this looks like a Lasm bug, please report it: https://x').length);
  assert.deepEqual(messageProblems('Main.lean:1:34: error: Unknown identifier `foo`\n[lasm] Build failed. Fix the error above and run the command again.'), []);
  assert.deepEqual(messageProblems('Could not create the directory /p/.lake: permission denied (EACCES). Check that you can write there, or choose another directory.'), []);
  // Lean's own "at" in prose is not a stack frame.
  assert.deepEqual(messageProblems('uncaught exception: failed at step 3'), []);
});

test('raw file-system errors become what, where, why and what to do', async t => {
  const directory = scratch(t);
  writeFileSync(join(directory, 'file'), '');
  if (process.platform !== 'win32') {
  const notDirectory = await nodeError(() => mkdir(join(directory, 'file', 'app'), { recursive: true }));
  const text = reported(notDirectory);
  assert.match(text, /^Could not create the directory .*file.*: not a directory \(ENOTDIR\)\. A file is where a directory is needed/);
  assert.deepEqual(messageProblems(text), []);
  }
  // A native (C library) message with a path attached.
  assert.equal(describeFileSystemError(Object.assign(new Error('Permission denied'), { code: 'EACCES', path: '/x/dist.lasm-output.lock', syscall: 'open' })),
    'Could not open /x/dist.lasm-output.lock: permission denied (EACCES). Check that you can write there, or choose another directory.');
  assert.match(describeFileSystemError(Object.assign(new Error('No space left on device'), { code: 'ENOSPC' })), /^A file operation failed: no space left on device \(ENOSPC\)\. The disk is full/);
  assert.equal(describeFileSystemError(Object.assign(new Error('ENOSPC: no space left on device, write'), { code: 'ENOSPC', syscall: 'write' })),
    'A file operation failed: no space left on device (ENOSPC). The disk is full; free some space and run the command again.');
  // Errors Lasm already explains, other codes and internal errors are left alone.
  assert.equal(describeFileSystemError(Object.assign(new Error('Insufficient free space for the 10-byte tool archive; 1 bytes available at /c.'), { code: 'ENOSPC' })), undefined);
  assert.equal(describeFileSystemError(Object.assign(new Error('connect ECONNREFUSED'), { code: 'ECONNREFUSED' })), undefined);
  assert.equal(describeFileSystemError(new Error('Usage: lasm cache repair')), undefined);
});

test('a lock that cannot be created names its file', { skip: !posixUser }, async t => {
  const directory = scratch(t), locked = join(directory, 'locked');
  mkdirSync(locked); chmodSync(locked, 0o555);
  const error = await nodeError(() => withApplicationLock(join(locked, 'x.lock'), () => {}));
  assert.equal(error.code, 'EACCES');
  assert.equal(error.path, join(locked, 'x.lock'));
  assert.match(reported(error), /^Could not open .*locked.x\.lock: permission denied \(EACCES\)\./);
});

test('lasm init onto an existing file says so', t => {
  const directory = scratch(t);
  writeFileSync(join(directory, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  assert.throws(() => initProject({ directory: join(directory, 'Main.lean'), template: 'plain' }), /Main\.lean is a file, not a directory\. Choose a new or empty directory\./);
});

test('an output path that is a file is named', async t => {
  const directory = scratch(t), built = join(directory, 'built'), output = join(directory, 'dist');
  mkdirSync(built); writeFileSync(join(built, 'main.mjs'), ''); writeFileSync(output, 'mine\n');
  await assert.rejects(deliverOutput(built, output, 'signature'), new RegExp(`The output ${output.replace(/[\\.]/g, '\\$&')} is not an ordinary directory`));
});

test('a program without main is refused with that reason', t => {
  const directory = scratch(t), source = join(directory, 'Main.lean');
  writeFileSync(source, 'def answer : Nat := 42\n');
  writeFileSync(join(directory, 'Main.c'), '// Lean compiler output\nLEAN_EXPORT lean_object* l_answer;\n');
  writeFileSync(join(directory, 'Helper.c'), 'int main(int argc, char ** argv) {\n}\n');
  const inputs = [{ module: 'Helper', source: join(directory, 'Helper.lean') }, { module: 'Main', source }];
  assert.throws(() => assertDefinesMain(inputs, [join(directory, 'Helper.c'), join(directory, 'Main.c')], source), /Main\.lean has no `main` function/);
  writeFileSync(join(directory, 'Main.c'), '// Lean compiler output\nint main(int argc, char ** argv) {\nreturn 0;\n}\n');
  assert.doesNotThrow(() => assertDefinesMain(inputs, [join(directory, 'Helper.c'), join(directory, 'Main.c')], source));
  // A source that is not among the inputs is not judged.
  assert.doesNotThrow(() => assertDefinesMain(inputs.slice(0, 1), [join(directory, 'Helper.c')], source));
});
