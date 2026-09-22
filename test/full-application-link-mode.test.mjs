import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, mkdirSync, writeFileSync, symlinkSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { applicationLinkMode } from '../scripts/full-lean/application-link-mode.mjs';
import { createHash } from 'node:crypto';

mkdirSync(resolve('.work'), { recursive: true });
const directory = mkdtempSync(resolve('.work/application-link-mode-'));
const source = join(directory, 'main.c'), custom = join(directory, 'custom.c');
writeFileSync(source, '// Lean compiler output\n// Module: Main\n');
writeFileSync(custom, 'int main(void) { return 0; }\n');
const library = join(directory, 'library'), alias = join(directory, 'alias'), other = join(directory, 'other');
mkdirSync(library); mkdirSync(other); symlinkSync(library, alias, process.platform === 'win32' ? 'junction' : 'dir');
const runtime = { build: '/recorded/runtime', compilerLibraryDirectories: [library] };
const normal = [source, '-O3', '-DNDEBUG', '-L', library, '-Wl,--start-group', '-lInit', '-lStd', '-lLean', '-lleanrt',
  '-lnodefs.js', '-Wl,--end-group', '-Wl,--export=__cpp_exception'];

test('generated Lean C can share only a selected runtime with its own library directories', () => {
  assert.equal(applicationLinkMode(normal, [], runtime).mode, 'shared');
  assert.equal(applicationLinkMode([source, '-L' + alias, '-lLean'], [], runtime).mode, 'shared');
  assert.equal(applicationLinkMode(normal, [], undefined).mode, 'standalone');
});

test('only byte-identical recorded runtime archives may be omitted from a shared link', () => {
  const archive = join(directory, 'runtime.a'), copied = join(directory, 'copied.a'), changed = join(directory, 'changed.a');
  const bytes = Buffer.from('recorded archive fixture');
  writeFileSync(archive, bytes); writeFileSync(copied, bytes);
  writeFileSync(changed, Buffer.from('modified archive fixture'));
  const provided = { ...runtime, providedArchives: [{ bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') }] };
  assert.equal(applicationLinkMode([...normal, archive], [], provided).mode, 'shared');
  assert.equal(applicationLinkMode([...normal, copied], [], provided).mode, 'shared');
  assert.equal(applicationLinkMode([...normal, changed], [], provided).mode, 'standalone');
  assert.equal(applicationLinkMode([...normal, archive], [], runtime).mode, 'standalone');
});

for (const [name, args, paths] of [
  ['rpath', normal, ['$ORIGIN/lib']],
  ['foreign library', [...normal, '-lforeign'], []],
  ['shadowed runtime library directory', [source, '-L', other, '-lLean'], []],
  ['missing library directory', [source, '-L', join(directory, 'absent'), '-lLean'], []],
  ['custom C main', [custom, '-lLean'], []],
  ['additional custom source', [...normal, custom], []],
  ['precompiled object', [...normal, 'ffi.o'], []],
  ['archive', [...normal, 'libffi.a'], []],
  ['dynamic dependency', [...normal, 'plugin.so.1'], []],
  ['symbol wrapping', [...normal, '-Wl,--wrap=malloc'], []],
  ['explicit injected header', [...normal, '-include', 'override.h'], []],
  ['visibility override', [...normal, '-fvisibility=hidden'], []],
  ['input without a C source', ['-lLean'], []],
]) test(`${name} retains standalone Wasm linking`, () => {
  assert.equal(applicationLinkMode(args, paths, runtime).mode, 'standalone');
});
