// The macOS SDK's libSystem.tbd adapted for Lean's ld64.lld (issue #73,
// src/macos-tbd.mjs). The fixtures are synthetic stubs written by hand.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdtempSync, rmSync, existsSync, mkdirSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { filterTapiStub, knownTarget, checkLibSystemStub, linkerArchitecture } from '../src/macos-tbd.mjs';

const fixture = name => readFileSync(new URL(`./fixtures/macos-tbd/${name}`, import.meta.url), 'utf8');
const standard = ['x86_64-macos', 'x86_64-maccatalyst', 'arm64-macos', 'arm64-maccatalyst', 'arm64e-macos', 'arm64e-maccatalyst'];

test('known targets are the macOS and Mac Catalyst targets of Lean\'s linker', () => {
  for (const target of [...standard, 'i386-macos', 'x86_64h-macos']) assert.ok(knownTarget(target), target);
  for (const target of ['arm64e.x1-macos', 'arm64e.x1-maccatalyst', 'arm64-ios', 'arm64-zippered', 'arm64', '-macos', 'arm64-'])
    assert.ok(!knownTarget(target), target);
  assert.equal(linkerArchitecture('arm64'), 'arm64');
  assert.equal(linkerArchitecture('x64'), 'x86_64');
});

test('tbd v4: unknown targets leave every target list, and sections, UUIDs and libraries only they had', () => {
  const { text, removed, targets } = filterTapiStub(fixture('v4-unknown-targets.tbd'));
  assert.deepEqual(removed, ['arm64e.x1-maccatalyst', 'arm64e.x1-macos']);
  assert.deepEqual(targets, standard);
  assert.doesNotMatch(text, /x1/);
  // The documents of the known libraries stay, in order; the x1-only library goes.
  assert.deepEqual([...text.matchAll(/^install-name:\s+'([^']+)'/gm)].map(match => match[1]),
    ['/usr/lib/libSystem.B.dylib', '/usr/lib/system/libsystem_c.dylib', '/usr/lib/system/libdyld.dylib']);
  assert.equal(text.match(/^--- !tapi-tbd$/gm).length, 3);
  assert.match(text, /\n\.\.\.\n$/, 'The stream end marker stays');
  // Symbols, quoting and the other keys are kept byte for byte.
  for (const line of ["    symbols:         [ 'R8289209$_close', 'R8289209$_fork', '$ld$previous$/usr/lib/libSystem.B.dylib$$1$10.0$11.0$$' ]",
    '    symbols:         [ _printf, _puts ]', '    weak-symbols:    [ _weak_c ]', '    umbrella:        System', 'current-version: 1698',
    '  - target:          arm64-macos', '    value:           00000000-0000-0000-0000-000000000002'])
    assert.ok(text.split('\n').includes(line), line);
  assert.doesNotMatch(text, /allowable-clients|_only_on_x1|_x1_c|00000000-0000-0000-0000-000000000003/);
  // Idempotent: a filtered stub is left as it is.
  assert.equal(filterTapiStub(text).text, text);
  assert.deepEqual(filterTapiStub(text).removed, []);
});

test('tbd v3: unknown architectures leave the arch and UUID lists', () => {
  const { text, removed, targets } = filterTapiStub(fixture('v3-unknown-archs.tbd'));
  assert.deepEqual(removed, ['arm64e.x1']);
  assert.deepEqual(targets, ['x86_64', 'arm64', 'arm64e']);
  assert.doesNotMatch(text, /x1/);
  assert.match(text, /^archs:\s+\[ x86_64, arm64, arm64e \]$/m);
  assert.match(text, /'arm64e: 00000000-0000-0000-0000-000000000003' \]/);
  assert.match(text, /^platform:\s+macosx$/m);
});

test('tbd v5 (JSON): unknown targets leave target_info, uuids and targets, and libraries only they had', () => {
  const { text, removed, targets } = filterTapiStub(fixture('v5-unknown-targets.tbd'));
  assert.deepEqual(removed, ['arm64e.x1-macos']);
  assert.deepEqual(targets, ['x86_64-macos', 'arm64-macos', 'arm64e-macos']);
  assert.doesNotMatch(text, /x1/);
  const stub = JSON.parse(text);
  assert.equal(stub.tapi_tbd_version, 5);
  assert.deepEqual(stub.main_library.uuids.map(uuid => uuid.target), ['arm64-macos']);
  assert.equal(stub.main_library.exported_symbols.length, 1);
  assert.deepEqual(stub.main_library.install_names, [{ name: '/usr/lib/libSystem.B.dylib' }], 'Entries without targets apply to all and stay');
  assert.deepEqual(stub.libraries.map(library => library.install_names[0].name), ['/usr/lib/system/libsystem_c.dylib']);
  assert.deepEqual(stub.libraries[0].exported_symbols[0].text.global, ['_printf', '_puts', 'dyld_stub_binder']);
});

test('stubs the filter cannot read, or with no known target, are refused', () => {
  assert.throws(() => filterTapiStub('--- !tapi-tbd\ntbd-version: 4\ntargets: [ arm64e.x1-macos ]\ninstall-name: /x\n...\n'), /no target/);
  assert.throws(() => filterTapiStub('--- !tapi-tbd\ntbd-version: 4\ntargets:\n  - arm64-macos\ninstall-name: /x\n...\n'), /not a flow sequence/);
  assert.throws(() => filterTapiStub('--- !tapi-tbd\ntbd-version: 4\ninstall-name: /x\n...\n'), /no target or architecture list/);
  assert.throws(() => filterTapiStub('{"tapi_tbd_version":5,"main_library":{"target_info":[{"target":"arm64e.x1-macos"}]}}'), /no target/);
  assert.throws(() => filterTapiStub('{"tapi_tbd_version":5}'), /main_library/);
});

test('the linker check reports the linker\'s own message', { skip: process.platform === 'win32' }, t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-tbd-test-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const linker = join(directory, 'ld64.lld');
  writeFileSync(linker, `#!/usr/bin/env node
const args = process.argv.slice(2), file = args.at(-1);
if (args[0] !== '-arch' || args[1] !== 'arm64' || !args.includes('-dylib')) { console.error('unexpected arguments ' + args.join(' ')); process.exit(2); }
if (require('fs').readFileSync(file, 'utf8').includes('x1')) { console.error('ld64.lld: error: could not load TAPI file at ' + file + ': malformed file'); process.exit(1); }
`, { mode: 0o755 });
  const good = join(directory, 'good.tbd'), bad = join(directory, 'bad.tbd');
  writeFileSync(good, filterTapiStub(fixture('v4-unknown-targets.tbd')).text);
  writeFileSync(bad, fixture('v4-unknown-targets.tbd'));
  assert.equal(checkLibSystemStub(linker, good, 'arm64'), null);
  assert.match(checkLibSystemStub(linker, bad, 'arm64'), /malformed file/);
  assert.match(checkLibSystemStub(join(directory, 'missing'), good, 'arm64'), /ENOENT/);
});

// With Lean's own LLD (LASM_TEST_LD64: a Lean 4.35.0 ld64.lld, or its multi-flavour
// lld / ld.lld under the name ld64.lld), the fixtures reproduce issue #73 and the
// filtered stubs load. The macOS CI job links against the runner's real SDK.
const realLinker = process.env.LASM_TEST_LD64;
test('Lean\'s ld64.lld rejects the v4 fixture and reads every filtered stub', { skip: !realLinker || !existsSync(realLinker) ? 'LASM_TEST_LD64 is not set' : false }, t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-tbd-real-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const raw = join(directory, 'raw.tbd');
  writeFileSync(raw, fixture('v4-unknown-targets.tbd'));
  assert.match(checkLibSystemStub(realLinker, raw, 'arm64'), /malformed file[\s\S]*unknown target/);
  for (const name of ['v3-unknown-archs.tbd', 'v4-unknown-targets.tbd', 'v5-unknown-targets.tbd']) {
    const file = join(directory, name);
    writeFileSync(file, filterTapiStub(fixture(name)).text);
    for (const arch of ['arm64', 'x64']) assert.equal(checkLibSystemStub(realLinker, file, arch), null, `${name} ${arch}`);
  }
});

// Synthetic stubs, one rule each (the YAML forms are line-oriented, so each case
// pins the exact text that remains).
const filtered = text => filterTapiStub(text);

test('YAML: Windows line endings are kept', () => {
  assert.deepEqual(filtered('--- !tapi-tbd\r\ntbd-version: 4\r\ntargets: [ arm64-macos, bad-ios ]\r\ninstall-name: /x\r\n...\r\n'),
    { text: '--- !tapi-tbd\r\ntbd-version: 4\r\ntargets: [ arm64-macos ]\r\ninstall-name: /x\r\n...\r\n', removed: ['bad-ios'], targets: ['arm64-macos'] });
});

test('YAML: a removed item takes its blank and comment lines with it', () => {
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n  - targets: [ bad-ios ]\n\n    # a comment about the symbols\n'
    + '    symbols: [ _gone ]\n  - targets: [ arm64-macos ]\n    symbols: [ _kept ]\n...\n').text,
  '--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n  - targets: [ arm64-macos ]\n    symbols: [ _kept ]\n...\n');
});

test('YAML: UUID items name their target after any spacing, quoted or not', () => {
  assert.deepEqual(filtered("--- !tapi-tbd\ntargets: [ arm64-macos ]\nuuids:\n  -   target:   'bad-ios'\n      value: 1\n  -   target: arm64-macos\n      value: 2\n...\n"),
    { text: '--- !tapi-tbd\ntargets: [ arm64-macos ]\nuuids:\n  -   target: arm64-macos\n      value: 2\n...\n', removed: ['bad-ios'], targets: ['arm64-macos'] });
});

test('YAML: a target list after other keys removes the whole item, found by its content column', () => {
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n    -   symbols: [ _x ]\n        weak-symbols: [ _w ]\n        targets: [ bad-ios ]\n'
    + '    -   symbols: [ _y ]\n        targets: [ arm64-macos ]\n...\n').text,
  '--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n    -   symbols: [ _y ]\n        targets: [ arm64-macos ]\n...\n');
  assert.throws(() => filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n  targets: [ bad-ios ]\n...\n'),
    { message: 'Unsupported TAPI stub: a target list outside a list item (targets: [  ])' });
  assert.throws(() => filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n  - targets:\n      - arm64-macos\n'),
    { message: 'Unsupported TAPI stub: a target list that is not a flow sequence (- targets:)' });
});

test('YAML: sections left without items go; a list at the key\'s own indentation belongs to it', () => {
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n- targets: [ arm64-macos ]\n  symbols: [ _a ]\nreexports:\n  - targets: [ bad-ios ]\n'
    + '    symbols: [ _b ]\n\nclients:\n  - targets: [ bad-ios ]\n    clients: [ c ]\n\n').text,
  '--- !tapi-tbd\ntargets: [ arm64-macos ]\nexports:\n- targets: [ arm64-macos ]\n  symbols: [ _a ]');
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nempty:\nnested:\n  inner:\n    - targets: [ bad-ios ]\nkept: yes\n').text,
    '--- !tapi-tbd\ntargets: [ arm64-macos ]\nkept: yes\n', 'emptied sections, nested ones too, go until none is left');
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\nsection:\n\n   value\n').text, '--- !tapi-tbd\ntargets: [ arm64-macos ]\nsection:\n\n   value\n',
    'a section with deeper content after blank lines stays');
});

test('YAML documents: the first must keep a target; later ones may go; "---" and "..." only at line starts', () => {
  assert.throws(() => filtered('--- !tapi-tbd\ntargets: [ bad-ios ]\n--- !tapi-tbd\ntargets: [ arm64-macos ]\n'), { message: 'The stub lists no target that Lean\'s linker knows' });
  assert.deepEqual(filtered("--- !tapi-tbd\ntargets: [ arm64-macos ]\nsymbols: [ '---x', '...' ]\n--- !tapi-tbd\ntargets: [ bad-ios ]\ninstall-name: /gone\n...  \n"),
    { text: "--- !tapi-tbd\ntargets: [ arm64-macos ]\nsymbols: [ '---x', '...' ]\n...  \n", removed: ['bad-ios'], targets: ['arm64-macos'] });
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\n').text, '--- !tapi-tbd\ntargets: [ arm64-macos ]\n', 'no stream end marker');
  assert.equal(filtered('--- !tapi-tbd\ntargets: [ arm64-macos ]\n...\n# after the end\n').text, '--- !tapi-tbd\ntargets: [ arm64-macos ]\n...\n# after the end\n');
});

test('YAML lists: spacing, quotes, empty entries and the main targets', () => {
  assert.deepEqual(filtered("--- !tapi-tbd\ntargets   : [ 'arm64-macos', x'bad', \"x86_64-macos\"q, x86_64-macos, ]\n"),
    { text: "--- !tapi-tbd\ntargets   : [ 'arm64-macos', x86_64-macos ]\n", removed: ['"x86_64-macos"q', "x'bad'"], targets: ['arm64-macos', 'x86_64-macos'] });
  assert.deepEqual(filtered('--- !tapi-tbd\nexports:\n  - targets: [ x86_64-macos ]\n    symbols: [ _a ]\ntargets: [ arm64-macos, x86_64-macos ]\n').targets,
    ['arm64-macos', 'x86_64-macos'], 'the main targets are the top-level list, wherever it is');
  assert.deepEqual(filtered("--- !tapi-tbd-v3\narchs: [ x86_64 , arm64, bad, ]\nuuids  : [ 'x86_64 : A' ,'bad: B', 'arm64: C' ]\nplatform: macosx\n"
    + "libs:\n  - archs: [ x86_64 ]\n    uuids: [ 'x86_64: D', 'bad: E', ]\n"),
  { text: "--- !tapi-tbd-v3\narchs: [ x86_64, arm64 ]\nuuids  : [ 'x86_64 : A', 'arm64: C' ]\nplatform: macosx\nlibs:\n  - archs: [ x86_64 ]\n    uuids: [ 'x86_64: D' ]\n",
    removed: ['bad'], targets: ['x86_64', 'arm64'] });
});

test('JSON: leading whitespace, nulls and nested arrays, every library\'s target_info, sorted removals', () => {
  const { text, removed, targets } = filtered('  \n{"main_library":{"target_info":[{"target":"zz-ios"},{"target":"arm64-macos"},{"target":"aa-ios"}],'
    + '"misc":[null,[1,{"target":"bad-x"}],"s"]},"libraries":[{"target_info":[{"target":"arm64-macos"},{"target":"bad-y"}],'
    + '"exports":[{"targets":["bad-z"]},{"targets":["arm64-macos","bad-w"]}]},{"target_info":[{"target":"gone-ios"}]}]}');
  assert.deepEqual(removed, ['aa-ios', 'bad-w', 'bad-x', 'bad-y', 'bad-z', 'gone-ios', 'zz-ios']);
  assert.deepEqual(targets, ['arm64-macos']);
  assert.ok(text.endsWith('}\n'));
  assert.deepEqual(JSON.parse(text), { main_library: { target_info: [{ target: 'arm64-macos' }], misc: [null, [1], 's'] },
    libraries: [{ target_info: [{ target: 'arm64-macos' }], exports: [{ targets: ['arm64-macos'] }] }] });
  assert.equal(text, JSON.stringify(JSON.parse(text), null, 2) + '\n');
  assert.throws(() => filtered('{"main_library":{}}'), { message: 'The stub lists no target that Lean\'s linker knows' });
});

test('linker architectures exist only for x64 and arm64', () => {
  for (const arch of ['ia32', 'arm', 'x86_64', ''])
    assert.throws(() => linkerArchitecture(arch), { message: `No macOS linker architecture for ${arch}` });
});

test('the linker check: exact arguments, trimmed messages, exit status without output, no temporary files left', { skip: process.platform === 'win32' }, t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-tbd-args-'));
  const temporary = join(directory, 'tmp');
  const saved = process.env.TMPDIR;
  t.after(() => { if (saved === undefined) delete process.env.TMPDIR; else process.env.TMPDIR = saved; rmSync(directory, { recursive: true, force: true }); });
  mkdirSync(temporary); process.env.TMPDIR = temporary;
  const linker = join(directory, 'ld64.lld');
  writeFileSync(linker, `#!/usr/bin/env node
const fs = require('fs'), path = require('path');
const args = process.argv.slice(2), mode = fs.readFileSync(args.at(-1), 'utf8').trim();
const expected = ['-arch', 'x86_64', '-platform_version', 'macos', '11.0', '11.0', '-dylib', '-o'];
if (JSON.stringify(args.slice(0, 8)) !== JSON.stringify(expected) || path.basename(args[8]) !== 'probe.dylib' || !fs.existsSync(path.dirname(args[8])))
  { console.error('unexpected arguments ' + JSON.stringify(args)); process.exit(2); }
if (mode === 'silent') process.exit(3);
if (mode === 'both') { process.stdout.write(' out\\n'); process.stderr.write('  err '); process.exit(1); }
`, { mode: 0o755 });
  const stub = name => { const file = join(directory, name); writeFileSync(file, name); return file; };
  assert.equal(checkLibSystemStub(linker, stub('ok'), 'x64'), null);
  assert.equal(checkLibSystemStub(linker, stub('silent'), 'x64'), 'exit status 3');
  assert.equal(checkLibSystemStub(linker, stub('both'), 'x64'), 'err  out');
  assert.match(checkLibSystemStub(linker, stub('ok'), 'arm64'), /^unexpected arguments/);
  assert.deepEqual(readdirSync(temporary), [], 'the probe directory is removed');
  assert.throws(() => checkLibSystemStub(linker, stub('ok'), 'ia32'), /No macOS linker architecture/);
  assert.deepEqual(readdirSync(temporary), []);
});
