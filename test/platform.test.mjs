import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import path from 'node:path';
import { tmpdir } from 'node:os';
import { bundledTools, executableName, insideDirectory, responseFile } from '../src/platform.mjs';

test('tool discovery handles official macOS and Windows executable layouts', t => {
  const root = mkdtempSync(path.join(tmpdir(), 'lasm tool layouts '));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  for (const [platform, linker] of [['linux', 'ld.lld'], ['darwin', 'ld64.lld'], ['win32', 'ld.lld']]) {
    const prefix = path.join(root, platform);
    mkdirSync(path.join(prefix, 'bin'), { recursive: true });
    for (const name of ['lean', 'lake', 'clang', linker]) writeFileSync(path.join(prefix, 'bin', executableName(name, platform)), 'layout fixture');
    const tools = bundledTools(prefix, platform);
    assert.equal(path.basename(tools.linker), executableName(linker, platform));
    assert.equal(path.basename(tools.lean), executableName('lean', platform));
    rmSync(tools.clang);
    assert.throws(() => bundledTools(prefix, platform), /complete official Lean toolchain/);
  }
});

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
