import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, rm, readFile, readlink, stat } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createZstdDecompress } from 'node:zlib';
import { Readable, Writable } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { x as extractTar, Parser } from 'tar';
import { moduleOf, dataPieceOf, binaryRoots, binaryCandidate, resolveImport, nativeImports, normalizeMembers,
  packArchive, coreModuleRoots, fixedMtime } from '../scripts/lean-dist/tiers.mjs';
import { tierCatalogEntry, extractionLimit } from '../scripts/lean-dist/catalog.mjs';

test('module data and sources are assigned to exactly one documented piece', () => {
  const cases = {
    'lib/lean/Init.olean': 'core-init', 'lib/lean/Init/Data/List.ir.sig': 'core-init', 'src/lean/Init.lean': 'core-init',
    'lib/lean/Std/Data/HashMap.olean.private': 'core-std', 'src/lean/Std.lean': 'core-std',
    'lib/lean/Lean/Meta.olean.server': 'ext-meta', 'lib/lean/Lean/Meta/Basic.ir': 'ext-meta',
    'lib/lean/Lean/Elab/Command.olean': 'ext-elab', 'src/lean/Lean/Elab/Tactic.lean': 'ext-elab',
    'lib/lean/Lean.olean': 'ext-rest', 'lib/lean/Lean/MetaM2.olean': 'ext-rest', 'lib/lean/Lake/Build.olean': 'ext-rest',
    'src/lean/lake/Lake/Build.lean': 'ext-rest', 'lib/lean/LeanIR.ir': 'ext-rest', 'lib/lean/LakeMain.olean': 'ext-rest',
    'lib/lean/Leanc.olean': 'excluded', 'src/lean/Leanc.lean': 'excluded',
    'lib/lean/Init.ilean': null, 'lib/lean/libleanshared.so': null, 'lib/lean/libInit.a': null,
    'src/lean/lake/README.md': null, 'bin/lean': null, 'include/lean/lean.h': null, 'lib/lean/../x.olean': null,
  };
  for (const [path, piece] of Object.entries(cases)) assert.equal(dataPieceOf(path), piece, path);
  assert.equal(moduleOf('src/lean/lake/Lake.lean'), 'Lake');
  assert.equal(moduleOf('lib/lean/Init/Data.olean.private'), 'Init.Data');
  assert.deepEqual(coreModuleRoots, ['Init', 'Std']);
});

test('binary roots and staging candidates match each platform layout', () => {
  assert.deepEqual(binaryRoots('win32-x64'), ['bin/lean.exe', 'bin/lake.exe', 'bin/leanir.exe', 'bin/cadical.exe', 'bin/libLake_shared.dll']);
  assert.ok(binaryRoots('darwin-x64').includes('lib/lean/libLake_shared.dylib'));
  assert.ok(binaryCandidate('lib/libc++.so.1.0', 'linux-x64') && binaryCandidate('lib/lean/libleanshared.so', 'linux-arm64'));
  assert.ok(!binaryCandidate('lib/lean/libLean.a', 'linux-x64') && !binaryCandidate('include/lean/lean.h', 'darwin-arm64'));
  assert.ok(binaryCandidate('bin/zlib1.dll', 'win32-x64') && !binaryCandidate('lib/libuv.dll.a', 'win32-x64'));
  assert.throws(() => binaryRoots('freebsd-x64'));
});

test('load-command names resolve to archive members or remain OS libraries', () => {
  const has = ['lib/lean/libleanshared.so', 'lib/libc++.so.1', 'bin/libleanshared.dll', 'lib/lean/libleanshared.dylib'];
  assert.equal(resolveImport('libleanshared.so', 'linux-x64', has), 'lib/lean/libleanshared.so');
  assert.equal(resolveImport('libc++.so.1', 'linux-x64', has), 'lib/libc++.so.1');
  assert.equal(resolveImport('libc.so.6', 'linux-x64', has), null);
  assert.equal(resolveImport('LIBLEANSHARED.DLL', 'win32-x64', has), 'bin/libleanshared.dll');
  assert.equal(resolveImport('KERNEL32.dll', 'win32-x64', has), null);
  assert.equal(resolveImport('@rpath/libleanshared.dylib', 'darwin-arm64', has), 'lib/lean/libleanshared.dylib');
  assert.equal(resolveImport('/usr/lib/libc++.1.dylib', 'darwin-arm64', has), null);
});

test('native import tables are read from synthetic ELF, Mach-O and PE files', () => {
  // ELF64: one PT_LOAD mapping everything at vaddr 0, one PT_DYNAMIC.
  const elf = Buffer.alloc(0x200);
  elf.writeUInt32BE(0x7f454c46, 0); elf[4] = 2; elf[5] = 1;
  elf.writeBigUInt64LE(0x40n, 0x20); elf.writeUInt16LE(56, 0x36); elf.writeUInt16LE(2, 0x38);
  elf.writeUInt32LE(1, 0x40); elf.writeBigUInt64LE(0n, 0x48); elf.writeBigUInt64LE(0n, 0x50); elf.writeBigUInt64LE(0x200n, 0x60);
  elf.writeUInt32LE(2, 0x78); elf.writeBigUInt64LE(0x100n, 0x80); elf.writeBigUInt64LE(0x100n, 0x88); elf.writeBigUInt64LE(64n, 0x98);
  const strings = '\0libleanshared.so\0libc.so.6\0$ORIGIN/../lib\0';
  elf.write(strings, 0x180, 'latin1');
  [[5n, 0x180n], [1n, 1n], [1n, 18n], [29n, 28n], [0n, 0n]].forEach(([tag, value], i) => {
    elf.writeBigInt64LE(tag, 0x100 + i * 16); elf.writeBigUInt64LE(value, 0x108 + i * 16);
  });
  assert.deepEqual(nativeImports(elf, 'linux-x64'), { needed: ['libleanshared.so', 'libc.so.6'], runpath: ['$ORIGIN/../lib'] });

  const macho = Buffer.alloc(0x100);
  macho.writeUInt32LE(0xfeedfacf, 0); macho.writeUInt32LE(2, 16);
  macho.writeUInt32LE(0xc, 32); macho.writeUInt32LE(56, 36); macho.writeUInt32LE(24, 40); macho.write('@rpath/libInit_shared.dylib\0', 56);
  macho.writeUInt32LE(0x80000018, 88); macho.writeUInt32LE(48, 92); macho.writeUInt32LE(24, 96); macho.write('/usr/lib/libc++.1.dylib\0', 112);
  assert.deepEqual(nativeImports(macho, 'darwin-arm64').needed, ['@rpath/libInit_shared.dylib', '/usr/lib/libc++.1.dylib']);

  // PE32+: one section mapping RVA 0x1000 to file offset 0x200.
  const pe = Buffer.alloc(0x400);
  pe.write('MZ', 0, 'latin1'); pe.writeUInt32LE(0x40, 0x3c); pe.write('PE\0\0', 0x40, 'latin1');
  pe.writeUInt16LE(1, 0x46); pe.writeUInt16LE(240, 0x54);
  const optional = 0x58; pe.writeUInt16LE(0x20b, optional); pe.writeBigUInt64LE(0x140000000n, optional + 24);
  pe.writeUInt32LE(0x1000, optional + 112 + 8); pe.writeUInt32LE(40, optional + 112 + 12);
  pe.writeUInt32LE(0x1100, optional + 112 + 13 * 8); pe.writeUInt32LE(64, optional + 112 + 13 * 8 + 4);
  const section = optional + 240; pe.writeUInt32LE(0x200, section + 8); pe.writeUInt32LE(0x1000, section + 12);
  pe.writeUInt32LE(0x200, section + 16); pe.writeUInt32LE(0x200, section + 20);
  pe.writeUInt32LE(0x1080, 0x200 + 12); // import descriptor name RVA
  pe.write('libleanshared.dll\0', 0x280, 'latin1');
  pe.writeUInt32LE(1, 0x300); pe.writeUInt32LE(0x10c0, 0x304); // delay import, RVA-based
  pe.write('KERNEL32.dll\0', 0x2c0, 'latin1');
  assert.deepEqual(nativeImports(pe, 'win32-x64').needed, ['libleanshared.dll', 'KERNEL32.dll']);
  assert.throws(() => nativeImports(Buffer.from('not a binary'), 'linux-x64'));
});

async function unpackEntries(bytes) {
  const entries = [];
  const parser = new Parser({ strict: true });
  parser.on('entry', entry => { entries.push({ path: entry.path, type: entry.type, mode: entry.mode, mtime: entry.mtime?.getTime() / 1000,
    uid: entry.uid, gid: entry.gid, linkpath: entry.linkpath }); entry.resume(); });
  await pipeline(Readable.from([bytes]), createZstdDecompress(), parser);
  return entries;
}

test('archives are deterministic, sorted, owner-free and keep long paths and executable bits', async t => {
  const base = await mkdtemp(join(tmpdir(), 'lasm-lean-dist-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const long = 'lib/lean/' + 'Deep/'.repeat(40) + 'Module.olean';
  const members = [
    { path: 'bin/lean', type: 'file', content: Buffer.from('#!/bin/sh\n'), size: 10, executable: true },
    { path: long, type: 'file', content: Buffer.from('data'), size: 4 },
    { path: 'lib/libc++.so.1', type: 'symlink', target: 'libc++.so.1.0' },
    { path: 'lib/libc++.so.1.0', type: 'file', content: Buffer.alloc(70_000, 7), size: 70_000 },
    { path: 'LICENSE', type: 'file', content: Buffer.from('license'), size: 7 },
  ];
  const open = member => Readable.from([member.content]);
  const pack = async list => {
    const chunks = [];
    const result = await packArchive('lean-test-bin', list, { open, zstd: { level: 3, windowLog: 20, long: false },
      sink: new Writable({ write(chunk, encoding, done) { chunks.push(chunk); done(); } }) });
    return { ...result, bytes: Buffer.concat(chunks) };
  };
  const first = await pack(members), second = await pack([...members].reverse());
  assert.ok(first.bytes.equals(second.bytes), 'member order and repetition never change the bytes');
  assert.equal(first.sha256, second.sha256);
  const entries = await unpackEntries(first.bytes);
  const paths = entries.map(entry => entry.path.replace(/\/$/, ''));
  assert.deepEqual(paths, [...paths].sort((a, b) => Buffer.compare(Buffer.from(a), Buffer.from(b))));
  assert.deepEqual(paths.slice(0, 4), ['lean-test-bin', 'lean-test-bin/LICENSE', 'lean-test-bin/bin', 'lean-test-bin/bin/lean']);
  assert.equal(new Set(paths).size, paths.length);
  assert.ok(entries.every(entry => entry.uid === 0 && entry.gid === 0 && entry.mtime === fixedMtime));
  assert.equal(entries.find(entry => entry.path === 'lean-test-bin/bin/lean').mode, 0o755);
  assert.equal(entries.find(entry => entry.path === 'lean-test-bin/LICENSE').mode, 0o644);
  assert.ok(entries.some(entry => entry.path === 'lean-test-bin/' + long));
  await pipeline(Readable.from([first.bytes]), createZstdDecompress(), extractTar({ cwd: base, strict: true }));
  assert.equal(await readFile(join(base, 'lean-test-bin', long), 'utf8'), 'data');
  if (process.platform !== 'win32') {
    assert.equal(await readlink(join(base, 'lean-test-bin/lib/libc++.so.1')), 'libc++.so.1.0');
    assert.ok((await stat(join(base, 'lean-test-bin/bin/lean'))).mode & 0o100);
  }
});

test('unsafe or duplicate members are rejected before packing', () => {
  for (const members of [[{ path: '../x', type: 'file' }], [{ path: 'a', type: 'file' }, { path: 'a', type: 'file' }],
    [{ path: 'a', type: 'file' }, { path: 'a/b', type: 'file' }], [{ path: 'l', type: 'symlink', target: '/etc/passwd' }]])
    assert.throws(() => normalizeMembers('root', members));
  assert.throws(() => normalizeMembers('../root', []));
});

test('catalog entries require identical shared archives across platform reports', () => {
  const data = (sha, written) => ['core-init', 'core-std', 'ext-meta', 'ext-elab', 'ext-rest'].map(piece => ({
    name: `lean-9.9.9-${piece}.tar.zst`, root: `lean-9.9.9-${piece}`, piece, sha256: sha.repeat(64), bytes: 10, fileBytes: 100, written,
    modules: piece.startsWith('core') ? [piece === 'core-init' ? 'Init' : 'Std'] : piece === 'ext-rest' ? ['Lake', 'Lean', 'LeanIR'] : ['Lean'] }));
  const report = (platform, sha, written) => ({ version: '9.9.9', commit: 'c'.repeat(40), platform, archives: [
    { name: `lean-9.9.9-${platform}-bin.tar.zst`, root: `lean-9.9.9-${platform}-bin`, piece: 'bin', sha256: 'b'.repeat(64), bytes: 5, fileBytes: 50, written: true },
    ...data(sha, written)] });
  const entry = tierCatalogEntry([report('linux-x64', 'a', true), report('darwin-arm64', 'a', false)], 'https://example.invalid/r/');
  assert.deepEqual(Object.keys(entry.bin), ['linux-x64', 'darwin-arm64']);
  assert.equal(entry.core[0].url, 'https://example.invalid/r/lean-9.9.9-core-init.tar.zst');
  assert.deepEqual(entry.extendedModules, ['Lake', 'Lean', 'LeanIR']);
  assert.equal(entry.core[0].maximumExtractedBytes, extractionLimit(100));
  assert.ok(extractionLimit(100) >= 100 + 16 * 1024 * 1024);
  assert.throws(() => tierCatalogEntry([report('linux-x64', 'a', true), report('win32-x64', 'd', false)], 'https://example.invalid/r/'), /differs/);
  assert.throws(() => tierCatalogEntry([report('linux-x64', 'a', false)], 'https://example.invalid/r/'), /No written/);
});

test('C tier selection: tools, headers and link libraries, but not Lean\'s static archives', async () => {
  const { cToolRoots, cDataMember, cCandidate, cMultiarch } = await import('../scripts/lean-dist/tiers.mjs');
  assert.deepEqual(cToolRoots('linux-x64'), ['bin/clang', 'bin/ld.lld', 'bin/llvm-ar']);
  assert.deepEqual(cToolRoots('darwin-arm64'), ['bin/clang', 'bin/ld64.lld', 'bin/llvm-ar']);
  assert.deepEqual(cToolRoots('win32-x64'), ['bin/clang.exe', 'bin/ld.lld.exe', 'bin/lld.exe', 'bin/llvm-ar.exe']);
  for (const path of ['include/lean/lean.h', 'include/clang/stddef.h', 'lib/clang/23/lib/linux/libclang_rt.builtins.a', 'lib/glibc/libc.so',
    'lib/libc/libSystem.tbd', 'lib/crt1.o', 'lib/libgmp.a', 'lib/libLLVM.so.23.1']) assert.ok(cDataMember(path), path);
  for (const path of ['lib/lean/libLean.a', 'lib/lean/Init.olean', 'src/lean/Init.lean', 'share/lean/lean.mk', 'bin/clang', 'LICENSE'])
    assert.ok(!cDataMember(path), path);
  assert.ok(cCandidate('bin/clang', 'linux-x64') && cCandidate('lib/glibc/libc.so', 'linux-x64') && !cCandidate('lib/lean/libInit.a', 'linux-x64'));
  assert.equal(cMultiarch('linux-arm64'), 'aarch64-linux-gnu');
  assert.equal(cMultiarch('win32-x64'), null);
});

test('C tier inputs: ar members of a Debian package are read exactly', async () => {
  const { arMembers } = await import('../scripts/lean-dist/c-inputs.mjs');
  const entry = (name, data) => Buffer.concat([Buffer.from(name.padEnd(16) + '0'.padEnd(12) + '0'.padEnd(6) + '0'.padEnd(6) + '100644'.padEnd(8)
    + String(data.length).padEnd(10) + '`\n', 'latin1'), data, data.length % 2 ? Buffer.from('\n') : Buffer.alloc(0)]);
  const archive = Buffer.concat([Buffer.from('!<arch>\n'), entry('debian-binary', Buffer.from('2.0\n')), entry('data.tar.zst', Buffer.from('abc'))]);
  assert.deepEqual(arMembers(archive).map(item => [item.name, item.data.toString()]), [['debian-binary', '2.0\n'], ['data.tar.zst', 'abc']]);
  assert.throws(() => arMembers(Buffer.from('nope')), /Not an ar archive/);
});
