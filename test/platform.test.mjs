import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, rmSync } from 'node:fs';
import path from 'node:path';
import { tmpdir } from 'node:os';
import { bundledTools, executableName, insideDirectory, responseFile } from '../src/platform.mjs';
import { run, lean } from '../src/toolchain.mjs';

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

test('LLD response files retain space and Unicode paths beyond Windows command limits', async t => {
  const directory = mkdtempSync(path.join(tmpdir(), 'lasm link 日本語 spaces '));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const tools = bundledTools(run(lean, ['--print-prefix']));
  const source = path.join(directory, 'answer.c');
  const object = path.join(directory, 'answer.o');
  const output = path.join(directory, 'answer.wasm');
  writeFileSync(source, 'int answer(void) { return 42; }\n');
  run(tools.clang, ['--target=wasm32-wasip1', '-c', source, '-o', object]);
  const args = ['--no-entry', '--export=answer', object, ...Array(4000).fill('--strip-all'), '-o', output];
  const response = path.join(directory, 'link.rsp');
  const contents = responseFile(args);
  assert.ok(contents.length > 32_768);
  writeFileSync(response, contents);
  run(tools.linker, ['-flavor', 'wasm', '--rsp-quoting=posix', '@' + response]);
  const { instance } = await WebAssembly.instantiate(readFileSync(output));
  assert.equal(instance.exports.answer(), 42);
  assert.throws(() => responseFile(['bad\nargument']), /newlines/);
  assert.equal(responseFile(['C:\\Space Path\\file.o']), '"C:\\\\Space Path\\\\file.o"\n');
});
