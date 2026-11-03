import test from 'node:test';
import assert from 'node:assert/strict';
import path from 'node:path';
import { insideDirectory, responseFile } from '../src/platform.mjs';

test('Windows path containment handles drive case, sibling prefixes, and other drives', () => {
  assert.equal(insideDirectory('C:\\Work\\App', 'c:\\work\\app\\Module.lean', path.win32), true);
  assert.equal(insideDirectory('C:\\Work\\App', 'C:\\Work\\Application\\Module.lean', path.win32), false);
  assert.equal(insideDirectory('C:\\Work\\App', 'D:\\Work\\App\\Module.lean', path.win32), false);
  assert.equal(insideDirectory('C:\\Work\\App', 'C:\\Work\\App\\..\\Secret', path.win32), false);
  assert.equal(insideDirectory('\\\\server\\share\\App', '\\\\server\\other\\App', path.win32), false);
});

test('LLD response files quote spaces, backslashes and Unicode, and refuse newlines', () => {
  // Linking with them is exercised by every build (src/application-link.mjs).
  const contents = responseFile(['C:\\Space Path\\file.o', '日本語 dir/a.o', 'quote"d', ...Array(4000).fill('--strip-all')]);
  assert.ok(contents.length > 32_768);
  assert.ok(contents.startsWith('"C:\\\\Space Path\\\\file.o"\n"日本語 dir/a.o"\n"quote\\"d"\n'));
  assert.throws(() => responseFile(['bad\nargument']), /newlines/);
  assert.throws(() => responseFile(['bad\0argument']), /NUL/);
  assert.equal(responseFile(['C:\\Space Path\\file.o']), '"C:\\\\Space Path\\\\file.o"\n');
});
