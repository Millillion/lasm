// The macOS SDK's libSystem.tbd adapted for Lean's ld64.lld (issue #73,
// src/macos-tbd.mjs). The fixtures are synthetic stubs written by hand.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdtempSync, rmSync, existsSync } from 'node:fs';
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
