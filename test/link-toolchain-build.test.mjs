import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { nativeRoots, nativeCandidate, resourceHeader, resolveNativeImport, sharedJsCandidate, checkRepairCoverage,
  treeDigestInput, nativeArchiveName, sharedArchiveName, nativeTools } from '../scripts/link-driver/toolchain.mjs';
import { toolchainCatalogEntry } from '../scripts/link-driver/toolchain-catalog.mjs';

const recipe = JSON.parse(readFileSync(new URL('../src/link-driver/recipe-emscripten-6.0.9.json', import.meta.url), 'utf8'));
const repairs = JSON.parse(readFileSync(new URL('../src/sdk-repairs.json', import.meta.url), 'utf8'));

test('native roots are exactly the programs the Node driver runs', () => {
  const programs = new Set([recipe.compile.tool, 'llvm-nm',
    ...['probe', 'final'].flatMap(mode => recipe.link.modes[mode].pipeline.map(step => step.program)).filter(name => name !== 'node')]);
  assert.deepEqual([...programs].sort(), [...nativeTools].sort());
  assert.deepEqual(nativeRoots('win32-x64'), nativeTools.map(name => `bin/${name}.exe`));
  assert.deepEqual(nativeRoots('darwin-arm64'), nativeTools.map(name => `bin/${name}`));
  assert.equal(nativeArchiveName('6.0.9', 'linux-arm64'), 'emscripten-6.0.9-linux-arm64-tools');
  assert.equal(sharedArchiveName('6.0.9'), 'emscripten-6.0.9-lasm-shared');
});

test('native staging keeps programs, shared libraries and resource headers only', () => {
  for (const path of ['bin/clang-24', 'bin/wasm-opt.exe', 'lib/libbinaryen.dylib', 'lib/libLLVM.so.24.0', 'lib/clang/24/include/stddef.h'])
    assert.ok(nativeCandidate(path), path);
  for (const path of ['lib/libc++.a', 'lib/clang/24/lib/wasi/libclang_rt.a', 'emscripten/emcc.py', 'bin/sub/x'])
    assert.ok(!nativeCandidate(path), path);
  assert.ok(resourceHeader('lib/clang/24/include/stdatomic.h'));
  assert.ok(!resourceHeader('lib/clang/24/lib/x'));
});

test('load-command names resolve inside the archive or stay OS libraries', () => {
  const members = ['bin/clang', 'lib/libbinaryen.dylib', 'bin/binaryen.dll', 'lib/libz.so.1'];
  assert.equal(resolveNativeImport('@rpath/libbinaryen.dylib', 'darwin-arm64', members), 'lib/libbinaryen.dylib');
  assert.equal(resolveNativeImport('/usr/lib/libSystem.B.dylib', 'darwin-arm64', members), null);
  assert.equal(resolveNativeImport('BINARYEN.DLL', 'win32-x64', members), 'bin/binaryen.dll');
  assert.equal(resolveNativeImport('KERNEL32.dll', 'win32-x64', members), null);
  assert.equal(resolveNativeImport('libz.so.1', 'linux-x64', members), 'lib/libz.so.1');
  assert.equal(resolveNativeImport('libc.so.6', 'linux-x64', members), null);
});

test('the Emscripten subset is the JavaScript compiler, its dependencies and licences', () => {
  for (const path of ['tools/compiler.mjs', 'tools/acorn-optimizer.mjs', 'src/lib/libpthread.js', 'src/settings.js',
    'node_modules/acorn/dist/acorn.mjs', 'node_modules/acorn-import-phases/src/index.js', 'third_party/terser/terser.js',
    'LICENSE', 'AUTHORS', 'emscripten-version.txt', 'system/lib/libc/musl/COPYRIGHT', 'system/lib/libcxx/LICENSE.TXT'])
    assert.ok(sharedJsCandidate(path), path);
  for (const path of ['emcc.py', 'emscripten-revision.txt', 'tools/link.py', 'tools/maint/x.mjs', 'node_modules/terser/dist/x.js', 'cache/sysroot/x.h',
    'system/lib/emmalloc.c', 'src/__pycache__/x.pyc', 'test/x.mjs'])
    assert.ok(!sharedJsCandidate(path), path);
});

test('every reviewed SDK repair is shipped, compiled into the sysroot or Python-only', () => {
  const selected = new Set(['src/lib/libdylink.js', 'src/lib/libpthread.js', 'emscripten-version.txt']);
  const coverage = checkRepairCoverage(repairs, selected);
  assert.deepEqual(coverage.applied.sort(), [...selected].sort());
  assert.deepEqual(coverage.sysroot.sort(), ['system/lib/emmalloc.c', 'system/lib/pthread/pthread_create.c']);
  assert.ok(coverage.omitted.every(path => path.endsWith('.py')));
  assert.throws(() => checkRepairCoverage(repairs, new Set(['src/lib/libdylink.js'])), /omits the repaired file src\/lib\/libpthread.js/);
});

test('tree digests ignore member order and see content, mode and links', () => {
  const a = [{ path: 'b', type: 'file', size: 1, sha256: 'x', executable: false }, { path: 'a', type: 'symlink', target: 'b' }];
  assert.equal(treeDigestInput(a), treeDigestInput([...a].reverse()));
  assert.notEqual(treeDigestInput(a), treeDigestInput([{ ...a[0], executable: true }, a[1]]));
  assert.notEqual(treeDigestInput(a), treeDigestInput([{ ...a[0], sha256: 'y' }, a[1]]));
});

test('the catalog requires identical shared bytes and subsets from every platform', () => {
  const report = (platform, { written = false, sha = 's', digest = 'd' } = {}) => ({ platform, emscripten: '6.0.9', releasesCommit: 'r',
    upstream: { sha256: platform }, externalImports: { 'libc.so.6': [] }, emscriptenSubset: { digest },
    archives: [{ piece: 'native', name: `emscripten-6.0.9-${platform}-tools.tar.zst`, root: `emscripten-6.0.9-${platform}-tools`,
      sha256: 'n' + platform, bytes: 10, fileBytes: 100, written: true, repacked: true },
    { piece: 'shared', name: 'emscripten-6.0.9-lasm-shared.tar.zst', root: 'emscripten-6.0.9-lasm-shared', sha256: sha,
      bytes: 5, fileBytes: 50, written, repacked: true, sysroot: { sha256: 'q' } }] });
  const base = 'https://github.com/Millillion/lasm/releases/download/t/';
  const entry = toolchainCatalogEntry([report('linux-x64', { written: true }), report('win32-x64')], base);
  assert.equal(entry.shared.url, base + 'emscripten-6.0.9-lasm-shared.tar.zst');
  assert.equal(entry.shared.name, 'emscripten-6.0.9-lasm-shared');
  assert.equal(entry.native['win32-x64'].format, 'tar.zst');
  assert.deepEqual(entry.native['linux-x64'].externalLibraries, ['libc.so.6']);
  assert.throws(() => toolchainCatalogEntry([report('linux-x64', { written: true }), report('win32-x64', { sha: 'other' })], base), /shared archive differs/);
  assert.throws(() => toolchainCatalogEntry([report('linux-x64', { written: true }), report('win32-x64', { digest: 'e' })], base), /subset differs/);
  assert.throws(() => toolchainCatalogEntry([report('win32-x64')], base), /No written shared archive/);
});

test('ar member listings see names, order and contents', async () => {
  const { arMembers } = await import('../scripts/link-driver/compare-sysroots.mjs');
  const header = (name, size) => Buffer.from(name.padEnd(16) + '0'.padEnd(12) + '0'.padEnd(6) + '0'.padEnd(6) + '644'.padEnd(8) + String(size).padEnd(10) + '`\n', 'latin1');
  const member = (name, text) => [header(name, text.length), Buffer.from(text), ...(text.length % 2 ? [Buffer.from('\n')] : [])];
  const archive = (...items) => Buffer.concat([Buffer.from('!<arch>\n'), ...items.flat()]);
  const a = arMembers(archive(member('/', 'symbols'), member('_Exit__1.o/', 'one'), member('_exit.o/', 'two')));
  const b = arMembers(archive(member('/', 'symbols'), member('_Exit.o/', 'one'), member('_exit__1.o/', 'two')));
  assert.deepEqual(a.map(item => item.name), ['_Exit__1.o', '_exit.o']);
  assert.deepEqual(a.map(item => item.sha256), b.map(item => item.sha256));
  assert.notDeepEqual(a.map(item => item.name), b.map(item => item.name));
  assert.throws(() => arMembers(Buffer.from('not an archive')), /Not an ar archive/);
});
