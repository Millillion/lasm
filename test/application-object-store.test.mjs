// The object stores of src/application-link.mjs: the project's and the
// machine-wide one (<tool cache>/objects) for Lasm's planning objects and probe
// records. Entries are content-addressed, self-checking and bounded.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, readFileSync, readdirSync, writeFileSync, existsSync, utimesSync, statSync, truncateSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { readStoreEntry, writeStoreEntry, pruneSharedStore } from '../src/application-link.mjs';

const directory = () => mkdtempSync(join(tmpdir(), 'lasm-object-store-'));

test('a stored entry reads back; a damaged, truncated or foreign entry is detected and removed', () => {
  const store = directory(), path = join(store, 'key.o'), bytes = Buffer.from('\0asm object bytes');
  writeStoreEntry(path, bytes);
  assert.deepEqual(readStoreEntry(path), bytes);
  assert.deepEqual(readdirSync(store), ['key.o'], 'no partial files are left behind');
  // One flipped byte of the content.
  const data = readFileSync(path); data[data.length - 1] ^= 1; writeFileSync(path, data);
  assert.equal(readStoreEntry(path), undefined);
  assert.equal(existsSync(path), false, 'a damaged entry is removed, so the build compiles and stores it again');
  writeStoreEntry(path, bytes);
  truncateSync(path, 20);
  assert.equal(readStoreEntry(path), undefined);
  // An entry in the earlier format (the raw object) is not trusted.
  writeFileSync(path, bytes);
  assert.equal(readStoreEntry(path), undefined);
  assert.equal(readStoreEntry(join(store, 'missing.o')), undefined);
  // Rebuilt after detection.
  writeStoreEntry(path, bytes);
  assert.deepEqual(readStoreEntry(path), bytes);
});

test('the machine-wide store keeps this build\'s entries and evicts the least recently used beyond its bound', () => {
  const store = directory(), entries = [];
  for (let i = 0; i < 6; i++) {
    const path = join(store, `entry-${i}.o`);
    writeStoreEntry(path, Buffer.alloc(100, i));
    const time = new Date(Date.UTC(2026, 0, 1 + i));
    utimesSync(path, time, time);
    entries.push(path);
  }
  writeFileSync(join(store, 'other.o.123.partial'), 'in progress');
  // This build used the oldest one: it is kept, and refreshed.
  pruneSharedStore(store, new Set([entries[0]]), { entries: 3, bytes: 1 << 30 });
  assert.deepEqual(readdirSync(store).sort(), ['entry-0.o', 'entry-4.o', 'entry-5.o', 'other.o.123.partial']);
  assert.ok(statSync(entries[0]).mtimeMs > statSync(entries[5]).mtimeMs);
  // The byte bound applies as well.
  pruneSharedStore(store, new Set(), { entries: 100, bytes: 300 });
  assert.deepEqual(readdirSync(store).filter(name => name.endsWith('.o')).length, 2);
});

test('store entries: an empty content is valid; a foreign file of any length is not', () => {
  const store = directory(), path = join(store, 'empty.o');
  writeStoreEntry(path, Buffer.alloc(0));
  assert.deepEqual(readStoreEntry(path), Buffer.alloc(0));
  writeFileSync(path, Buffer.alloc(64, 7));
  assert.equal(readStoreEntry(path), undefined);
  assert.equal(existsSync(path), false);
  // Entries written in turn by one process do not collide.
  for (let index = 0; index < 3; index++) writeStoreEntry(join(store, `entry-${index}.o`), Buffer.from([index]));
  assert.deepEqual(readdirSync(store).sort(), ['entry-0.o', 'entry-1.o', 'entry-2.o']);
});

test('the shared store evicts by age, not name, keeps used entries over its bound, and stops at the bound', () => {
  const store = directory();
  const write = (name, day, size = 10) => { const path = join(store, name); writeFileSync(path, Buffer.alloc(size)); const time = new Date(Date.UTC(2026, 0, day)); utimesSync(path, time, time); return path; };
  write('a.o', 5); write('b.o', 1); write('c.o', 3); const d = write('d.o', 2); const e = write('e.o', 4);
  // Two used entries beyond a bound of one: both stay, every other one goes, oldest first.
  pruneSharedStore(store, new Set([d, e]), { entries: 1, bytes: 1 << 30 });
  assert.deepEqual(readdirSync(store).sort(), ['d.o', 'e.o']);
  const other = directory();
  const at = (name, day) => { const path = join(other, name); writeFileSync(path, Buffer.alloc(10)); const time = new Date(Date.UTC(2026, 0, day)); utimesSync(path, time, time); };
  at('z.o', 1); at('y.o', 2); at('x.o', 3);
  pruneSharedStore(other, new Set(), { entries: 2, bytes: 1 << 30 });
  assert.deepEqual(readdirSync(other).sort(), ['x.o', 'y.o'], 'the oldest goes first, whatever its name');
  // Exactly at the byte bound: nothing is evicted.
  pruneSharedStore(other, new Set(), { entries: 100, bytes: 20 });
  assert.deepEqual(readdirSync(other).sort(), ['x.o', 'y.o']);
  pruneSharedStore(other, new Set(), { entries: 100, bytes: 19 });
  assert.deepEqual(readdirSync(other), ['x.o']);
  // A store that does not exist (yet) is not an error.
  assert.doesNotThrow(() => pruneSharedStore(join(other, 'missing'), new Set([join(other, 'missing', 'gone.o')])));
});
