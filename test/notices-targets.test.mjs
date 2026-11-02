// Notice generation (src/notices.mjs), the logic around the texts: which Lake
// packages' licence files are collected and under what name, how a target's
// notices are derived from the Node build's (headers, the edge runtime's patch
// list, Lean's release licences replaced by a note), and the checks that refuse
// notices this Lasm did not write. Written to kill the surviving mutants of
// docs/TESTING.md#mutation-testing; test/notices.test.mjs covers the texts.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync, symlinkSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { applicationNotices, leanRuntimeChanges, runtimeLinksGmp, lakeDependencyLicenses, dependencyNotices, targetNotices,
  noticeVersions, noticeBanner, withoutLeanReleaseLicenses, edgeLeanPatches, noticeKinds } from '../src/notices.mjs';

const manifest = (patches = Object.keys(leanRuntimeChanges), libraries = ['lib/libleanrt.a']) => ({ name: 'lean-4.35.0-wasm64', lean: '4.35.0',
  leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9', libraries,
  patches: Object.fromEntries(patches.map(name => [name, '0'.repeat(64)])) });
const runtime = '=== Lean ===\nApache\n=== Lean bundled dependencies ===\nGNU C Library LGPL text\n=== mimalloc ===\nMIT text\n';

test('applications carry a note instead of Lean’s release licences; the CLI package keeps them', () => {
  const app = applicationNotices(manifest(), runtime);
  assert.doesNotMatch(app, /GNU C Library LGPL text/);
  assert.match(app, /=== Lean bundled dependencies ===\nLean's LICENSES file lists/);
  assert.match(app, /The Lasm compiler package keeps Lean's LICENSES in full\.\n\n=== mimalloc ===\nMIT text\n$/);
  assert.match(applicationNotices(manifest(), runtime, { cli: true }), /GNU C Library LGPL text/);
  // The last section: the note runs to the end.
  assert.match(withoutLeanReleaseLicenses('=== A ===\na\n=== Lean bundled dependencies ===\nold\n'), /^=== A ===\na\n=== Lean bundled dependencies ===\nLean's LICENSES[^]*in full\.\n\n$/);
  // Only a whole heading line counts.
  const inline = 'x === Lean bundled dependencies === y\n';
  assert.equal(withoutLeanReleaseLicenses(inline), inline);
  const prefixed = '=== Lean bundled dependencies ===x\nkeep\n';
  assert.equal(withoutLeanReleaseLicenses(prefixed), prefixed);
  assert.equal(withoutLeanReleaseLicenses('no headings'), 'no headings');
});

test('the change list names each applied patch with its files and purpose; unknown patches by name', () => {
  const text = applicationNotices(manifest(['compact-alignment', 'custom-patch']), '');
  assert.match(text, /\n {2}- compact-alignment: src\/runtime\/compact\.cpp \(pad compacted object headers to pointer alignment\)\n {2}- custom-patch\n/);
  const wasm = applicationNotices(manifest(['wasm-build']), '');
  assert.ok(wasm.includes(`  - wasm-build: ${leanRuntimeChanges['wasm-build'].slice(0, -1).join('; ')} (build Lean for wasm64 Emscripten)\n`));
  assert.match(text, /Lean 4\.35\.0 \(https:\/\/github\.com\/leanprover\/lean4\/tree\/eb6cafb7290e8bd5f2937522d8d804f58f02bafc\)/);
});

test('GNU MP is detected only as a libgmp.a library', () => {
  assert.equal(runtimeLinksGmp({ libraries: ['lib/libgmp.a'] }), true);
  assert.equal(runtimeLinksGmp({ libraries: ['libgmp.a'] }), true);
  assert.equal(runtimeLinksGmp({ libraries: ['lib/libgmp.a.old', 'lib/notlibgmp.a', 'lib/libgmpxx.a'] }), false);
  assert.equal(runtimeLinksGmp({}), false);
});

test('target notices: a header per kind, the edge patch list, the Wasmtime adapter for wasi-http', () => {
  const node = applicationNotices(manifest(), runtime);
  assert.equal(targetNotices(node, 'node'), withoutLeanReleaseLicenses(node));
  for (const kind of noticeKinds.filter(k => k !== 'node')) {
    const text = targetNotices(node, kind, { label: `Label-${kind}` });
    assert.ok(text.startsWith(`THIRD-PARTY AND LASM NOTICES\n\nThis Label-${kind} output was compiled by Lasm.`), kind);
    assert.match(text, /Lean 4\.35\.0 runtime and standard library/);
    assert.match(text, /Emscripten 6\.0\.9's system libraries/);
    assert.ok(text.includes('\n=== Lasm ===\n'), kind);
    assert.equal(text.includes('This application was compiled by Lasm'), false, 'the Node header is replaced');
    // Edge runtimes apply the shared patches and 'edge', never the Node-only ones.
    assert.match(text, /\n {2}- edge: src\/CMakeLists\.txt, src\/runtime\/mutex\.cpp, src\/runtime\/object\.cpp \(build the runtime single-threaded for edge isolates\)\n/);
    assert.doesNotMatch(text, /- node-threads/);
    assert.match(text, /- compact-alignment: /);
    assert.equal(text.includes('=== Wasmtime proxy adapter ==='), kind === 'wasi-http', kind);
    assert.equal(text.includes('pkg/<name>.tar.gz'), kind === 'fastly', kind);
  }
  assert.match(targetNotices(node, 'edge'), /^THIRD-PARTY AND LASM NOTICES\n\nThis edge output/);
  assert.throws(() => targetNotices(node, 'lambda'), { message: 'Unknown notices kind lambda' });
  assert.throws(() => targetNotices('something else\n=== Lasm ===\n', 'edge'), { message: 'These notices were not written by this Lasm' });
  assert.throws(() => targetNotices('THIRD-PARTY AND LASM NOTICES\nno Lasm section', 'wasi'), { message: 'These notices were not written by this Lasm' });
  // The Lasm section may not start the body (the header precedes it).
  assert.throws(() => targetNotices('THIRD-PARTY AND LASM NOTICES\n', 'wasi'), /not written by this Lasm/);
  // Notices without a patch list are kept as they are.
  const plain = 'THIRD-PARTY AND LASM NOTICES\n  - Lean 9.9 runtime and standard library\n  - Emscripten 1.2\'s system libraries\n\n=== Lasm ===\nMIT\n';
  assert.ok(targetNotices(plain, 'wasi').endsWith('=== Lasm ===\nMIT\n'));
});

test('the edge patch list: shared patches in order, then edge once', () => {
  assert.deepEqual(edgeLeanPatches(['wasm-build', 'node-threads', 'edge', 'host-linux']), ['wasm-build', 'host-linux', 'edge']);
  assert.deepEqual(edgeLeanPatches([]), ['edge']);
});

test('versions and banners come from the Node notices header, or fail', () => {
  const node = applicationNotices(manifest(), '');
  assert.deepEqual(noticeVersions(node), { lean: '4.35.0', emscripten: '6.0.9' });
  assert.deepEqual(noticeVersions("Lean 1.2.3 runtime and standard library\nEmscripten 4.5.6's system libraries"), { lean: '1.2.3', emscripten: '4.5.6' });
  for (const text of ['', 'Lean 1 runtime and standard library', "Emscripten 2's system libraries"])
    assert.throws(() => noticeVersions(text), { message: 'These notices were not written by this Lasm (no Lean and Emscripten versions in the header)' });
  const banner = noticeBanner(node, 'my-app');
  assert.ok(banner.startsWith('/*! my-app, built by Lasm. Contains Lean 4.35.0 runtime'));
  assert.match(banner, /Emscripten 6\.0\.9 runtime/);
  assert.ok(banner.endsWith('Licence texts: THIRD_PARTY_NOTICES.txt */\n'));
  assert.ok(noticeBanner(node, 'x', 'NOTICES.md').endsWith('Licence texts: NOTICES.md */\n'));
});

test('Lake dependency licences: package roots, names, licence files, exclusions', t => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-notices-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const write = (path, text = 'x') => { mkdirSync(join(root, path, '..'), { recursive: true }); writeFileSync(join(root, path), text); };
  write('project/lakefile.toml', 'name = "project"');
  write('project/Main.lean');
  // A TOML package; licence files by common names; other files not.
  write('deps/batteries/lakefile.toml', '[package]\n  name = "batteries"\nversion = "1"');
  write('deps/batteries/Batteries/Data.lean');
  for (const name of ['LICENSE', 'license.md', 'COPYING', 'NOTICE.txt', 'Copyright', 'UNLICENSE', 'LICENCE-MIT'])
    write(`deps/batteries/${name}`, `text of ${name}`);
  for (const name of ['MY_LICENSE', 'LICENSEE', 'README.md', 'notices', 'licenses.json'])
    write(`deps/batteries/${name}`, 'not a licence');
  mkdirSync(join(root, 'deps/batteries/LICENSES'));
  // Lean lakefiles: quoted, «guillemets», bare; invalid characters in names become _.
  write('deps/quoted/lakefile.lean', 'import Lake\nopen Lake DSL\n  package "quoted pkg" where');
  write('deps/quoted/Q.lean');
  write('deps/guillemet/lakefile.lean', 'package «mathlib» where');
  write('deps/guillemet/M.lean');
  write('deps/bare/lakefile.lean', "-- package fake\npackage aesop' where");
  write('deps/bare/sub/deep/A.lean');
  // No name in the lakefile: the directory's name.
  write('deps/noname/lakefile.toml', 'version = "1"');
  write('deps/noname/N.lean');
  write('deps/noname/LICENSE', 'noname licence');
  // Under an excluded toolchain prefix.
  write('toolchain/lakefile.toml', 'name = "toolchain"');
  write('toolchain/Init.lean');
  // Not in any package.
  write('loose/x.c');
  const files = ['project/Main.lean', 'deps/batteries/Batteries/Data.lean', 'deps/quoted/Q.lean', 'deps/guillemet/M.lean',
    'deps/bare/sub/deep/A.lean', 'deps/noname/N.lean', 'toolchain/Init.lean', 'deps/batteries/Batteries/Data.lean'].map(f => join(root, f));
  const found = lakeDependencyLicenses(join(root, 'project'), files, { exclude: [join(root, 'toolchain'), undefined, ''] });
  assert.deepEqual(found.map(p => p.name), ['aesop_', 'batteries', 'mathlib', 'noname', 'quoted_pkg']);
  const batteries = found.find(p => p.name === 'batteries');
  assert.deepEqual(batteries.files.map(f => f.name), ['COPYING', 'Copyright', 'LICENCE-MIT', 'LICENSE', 'NOTICE.txt', 'UNLICENSE', 'license.md'].sort());
  assert.equal(batteries.files.find(f => f.name === 'LICENSE').sha256, createHash('sha256').update('text of LICENSE').digest('hex'));
  assert.equal(batteries.files.find(f => f.name === 'LICENSE').path, join(root, 'deps/batteries/LICENSE'));
  assert.equal(batteries.directory, join(root, 'deps/batteries'));
  assert.deepEqual(found.find(p => p.name === 'quoted_pkg').files, []);
  // A file outside every package and the project's own files add nothing; a symlinked package counts once.
  symlinkSync(join(root, 'deps/noname'), join(root, 'alias'));
  const again = lakeDependencyLicenses(join(root, 'project'), [join(root, 'loose/x.c'), join(root, 'alias/N.lean'), join(root, 'deps/noname/N.lean')]);
  assert.deepEqual(again.map(p => p.name), ['noname']);
  // Without exclusions the toolchain package is listed too.
  assert.deepEqual(lakeDependencyLicenses(join(root, 'project'), [join(root, 'toolchain/Init.lean')]).map(p => p.name), ['toolchain']);
  // An exclusion is a directory prefix, not a string prefix.
  assert.deepEqual(lakeDependencyLicenses(join(root, 'project'), [join(root, 'toolchain/Init.lean')], { exclude: [join(root, 'tool')] }).map(p => p.name), ['toolchain']);
  // Notice sections: the list, then each text.
  const text = dependencyNotices(found);
  assert.ok(text.startsWith('\n=== Lake dependencies compiled into program.wasm ===\nTheir licence files are copied verbatim into licenses/<package>/ and below.\n'));
  assert.match(text, /\n {2}- batteries: COPYING, Copyright, LICENCE-MIT, LICENSE, NOTICE\.txt, UNLICENSE, license\.md\n/);
  assert.match(text, /\n {2}- quoted_pkg: no licence file found in the package\n/);
  assert.match(text, /\n=== Lake dependency noname: LICENSE ===\nnoname licence/);
  assert.match(text, /\n=== Lake dependency batteries: COPYING ===\ntext of COPYING/);
  assert.equal(dependencyNotices([]), '');
});
