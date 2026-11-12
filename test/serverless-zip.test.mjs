// src/serverless/zip.mjs against the ZIP format (APPNOTE.TXT 6.3.10): a reader
// written from the specification parses every record and field the writer
// produces, and what it reads back is what was written.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { inflateRawSync, crc32 } from 'node:zlib';
import { zip } from '../src/serverless/zip.mjs';
import { forAll } from './helpers/property.mjs';

const dosDate = (2026 - 1980) << 9 | 1 << 5 | 1;

/** Every record of a ZIP archive, checked against each other: { entries: [{ name, data, mode, method, external }], comment }. */
function unzip(bytes) {
  const end = bytes.length - 22;
  assert.equal(bytes.readUInt32LE(end), 0x06054b50, 'end of central directory signature');
  assert.equal(bytes.readUInt16LE(end + 4), 0, 'disk number');
  assert.equal(bytes.readUInt16LE(end + 6), 0, 'central directory disk');
  const count = bytes.readUInt16LE(end + 8);
  assert.equal(bytes.readUInt16LE(end + 10), count, 'entries on this disk = entries');
  const size = bytes.readUInt32LE(end + 12), start = bytes.readUInt32LE(end + 16);
  assert.equal(start + size, end, 'the central directory ends where the end record starts');
  assert.equal(bytes.readUInt16LE(end + 20), 0, 'no comment');
  const entries = [];
  let at = start, expectedOffset = 0;
  for (let i = 0; i < count; i++) {
    assert.equal(bytes.readUInt32LE(at), 0x02014b50, 'central file header signature');
    assert.equal(bytes.readUInt16LE(at + 4), 3 << 8 | 20, 'made by Unix, version 2.0');
    assert.equal(bytes.readUInt16LE(at + 6), 20, 'version needed 2.0');
    assert.equal(bytes.readUInt16LE(at + 8), 0x0800, 'UTF-8 names');
    const method = bytes.readUInt16LE(at + 10);
    assert.deepEqual([bytes.readUInt16LE(at + 12), bytes.readUInt16LE(at + 14)], [0, dosDate], 'fixed time and date');
    const crc = bytes.readUInt32LE(at + 16), compressed = bytes.readUInt32LE(at + 20), size = bytes.readUInt32LE(at + 24);
    const nameLength = bytes.readUInt16LE(at + 28);
    assert.deepEqual([bytes.readUInt16LE(at + 30), bytes.readUInt16LE(at + 32), bytes.readUInt16LE(at + 34), bytes.readUInt16LE(at + 36)], [0, 0, 0, 0],
      'no extra field, comment, disk or internal attributes');
    const external = bytes.readUInt32LE(at + 38), offset = bytes.readUInt32LE(at + 42);
    const name = bytes.subarray(at + 46, at + 46 + nameLength).toString('utf8');
    at += 46 + nameLength;
    assert.equal(offset, expectedOffset, 'local headers follow each other');
    assert.equal(bytes.readUInt32LE(offset), 0x04034b50, 'local file header signature');
    assert.equal(bytes.readUInt16LE(offset + 4), 20);
    assert.equal(bytes.readUInt16LE(offset + 6), 0x0800);
    assert.equal(bytes.readUInt16LE(offset + 8), method);
    assert.deepEqual([bytes.readUInt16LE(offset + 10), bytes.readUInt16LE(offset + 12)], [0, dosDate]);
    assert.deepEqual([bytes.readUInt32LE(offset + 14), bytes.readUInt32LE(offset + 18), bytes.readUInt32LE(offset + 22)], [crc, compressed, size],
      'the local header repeats the central record');
    assert.equal(bytes.readUInt16LE(offset + 26), nameLength);
    assert.equal(bytes.readUInt16LE(offset + 28), 0, 'no extra field');
    assert.equal(bytes.subarray(offset + 30, offset + 30 + nameLength).toString('utf8'), name);
    const stored = bytes.subarray(offset + 30 + nameLength, offset + 30 + nameLength + compressed);
    assert.ok(method === 0 || method === 8, 'stored or deflated');
    const data = method === 8 ? inflateRawSync(stored) : Buffer.from(stored);
    assert.equal(data.length, size);
    assert.equal(crc32(data), crc, 'CRC-32 of the uncompressed data');
    if (method === 0) assert.equal(compressed, size);
    expectedOffset = offset + 30 + nameLength + compressed;
    entries.push({ name, data, mode: external >>> 16, method, external });
  }
  assert.equal(expectedOffset, start, 'the central directory follows the last entry');
  return entries;
}

test('zip: directories first, implied parents, Unix modes, deflate only when smaller', () => {
  const text = Buffer.from('hello hello hello hello hello hello hello hello');
  const entries = unzip(zip([
    { name: 'b/c/run.sh', data: Buffer.from('#!/bin/sh\n'), mode: 0o755 },
    { name: 'a.txt', data: text },
    { name: 'b/empty', data: Buffer.alloc(0) },
    { name: 'b/c/noise', data: Buffer.from([0x9f, 0x1c, 0x03]) },
  ]));
  assert.deepEqual(entries.map(e => e.name), ['b/', 'b/c/', 'b/c/run.sh', 'a.txt', 'b/empty', 'b/c/noise']);
  assert.deepEqual(entries.map(e => e.mode.toString(8)), ['40755', '40755', '100755', '100644', '100644', '100644']);
  assert.deepEqual(entries.map(e => e.external & 0xffff), [0x10, 0x10, 0, 0, 0, 0], 'MS-DOS directory attribute on directories');
  assert.deepEqual(entries.map(e => e.method), [0, 0, 0, 8, 0, 0], 'deflated only when that is smaller');
  assert.deepEqual(entries[3].data, text);
  assert.deepEqual(entries[5].data, Buffer.from([0x9f, 0x1c, 0x03]));
  assert.deepEqual(unzip(zip([])), []);
});

test('zip: names are UTF-8; duplicates and too many files are refused', () => {
  const [entry] = unzip(zip([{ name: 'é✓.txt', data: Buffer.from('x') }]));
  assert.equal(entry.name, 'é✓.txt');
  assert.throws(() => zip([{ name: 'a', data: Buffer.alloc(0) }, { name: 'a', data: Buffer.alloc(1) }]), { message: 'Duplicate ZIP entry: a' });
  assert.throws(() => zip([{ name: 'd/x', data: Buffer.alloc(0) }, { name: 'd/', data: Buffer.alloc(0) }]), { message: 'Duplicate ZIP entry: d/' });
  const many = Array.from({ length: 0x10000 }, (_, i) => ({ name: `f${i}`, data: Buffer.alloc(0) }));
  assert.throws(() => zip(many), { message: 'Function package has more than 65535 files' });
});

// Proposition: Lasm.Cli.Candidates.zip_reads_back
//   ∀ (entries : List ZipEntry) (archive : ByteArray), zip entries = .ok archive →
//     ∃ read, unzip archive = some read ∧
//       read.map (·.name) = directoriesOf entries ++ entries.map (·.name) ∧
//       (∀ d ∈ read.take (directoriesOf entries).length, d.mode = 0o40755 ∧ d.data.size = 0 ∧ d.method = 0) ∧
//       ∀ x ∈ (read.drop (directoriesOf entries).length).zip entries,
//         x.1.data = x.2.data ∧ x.1.mode = 0o100000 ||| x.2.mode.getD 0o644
test('property: what zip writes, a ZIP reader reads back', () => {
  const segments = ['a', 'b', 'lib', 'é', 'x.y'];
  forAll(r => {
    const names = new Set();
    const entries = [];
    for (let i = r.int(0, 6); i > 0; i--) {
      const name = r.array(r.int(1, 3), () => r.pick(segments)).join('/') + '.f';
      if (names.has(name)) continue;
      names.add(name);
      const data = r.pick([() => r.bytes(), () => Buffer.from(r.string(['a', 'b'], 0, 300))])();
      entries.push({ name, data, ...(r.int(0, 1) ? { mode: r.pick([0o755, 0o600, 0o644]) } : {}) });
    }
    return entries;
  }, entries => {
    const read = unzip(zip(entries));
    const directories = [...new Set(entries.flatMap(({ name }) => name.split('/').slice(0, -1).map((_, i, parts) => parts.slice(0, i + 1).join('/') + '/')))].sort();
    assert.deepEqual(read.map(e => e.name), [...directories, ...entries.map(e => e.name)]);
    for (const [i, entry] of entries.entries()) {
      const got = read[directories.length + i];
      assert.deepEqual(got.data, entry.data);
      assert.equal(got.mode, 0o100000 | (entry.mode ?? 0o644));
    }
    for (const directory of read.slice(0, directories.length)) assert.deepEqual([directory.mode, directory.data.length, directory.method], [0o40755, 0, 0]);
  }, { runs: 150 });
});

// Proposition: Lasm.Cli.Candidates.zip_deterministic
//   ∀ entries : List ZipEntry, zip entries = zip entries
test('property: zip is deterministic', () => {
  forAll(r => r.array(r.int(0, 4), (_, i) => ({ name: `d${r.int(0, 2)}/f${i}`, data: r.bytes(0, 200) })), entries => {
    assert.deepEqual(zip(entries), zip(entries));
  }, { runs: 50 });
});
