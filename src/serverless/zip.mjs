// A minimal, deterministic ZIP writer (deflate, Unix permissions) for function
// packages. Permissions come from the caller, not the build machine's file
// system, so a package built on Windows keeps the Linux helpers executable.
import { deflateRawSync, crc32 } from 'node:zlib';

const dosTime = 0, dosDate = (2026 - 1980) << 9 | 1 << 5 | 1; // fixed 2026-01-01 00:00

/** entries: [{ name, data: Buffer, mode }] (files only; directories are implied). Returns a Buffer. */
export function zip(entries) {
  const local = [], central = [];
  let offset = 0;
  const names = new Set();
  // Explicit directory entries help tools that do not create parents.
  const directories = new Set();
  for (const { name } of entries) {
    const parts = name.split('/');
    for (let i = 1; i < parts.length; i++) directories.add(parts.slice(0, i).join('/') + '/');
  }
  const all = [...[...directories].sort().map(name => ({ name, data: Buffer.alloc(0), mode: 0o40755 })),
    ...entries.map(entry => ({ ...entry, mode: 0o100000 | (entry.mode ?? 0o644) }))];
  for (const { name, data, mode } of all) {
    if (names.has(name)) throw new Error('Duplicate ZIP entry: ' + name);
    names.add(name);
    const fileName = Buffer.from(name, 'utf8');
    const directory = name.endsWith('/');
    const compressed = directory ? data : deflateRawSync(data, { level: 9 });
    const method = directory || compressed.length >= data.length ? 0 : 8;
    const stored = method === 8 ? compressed : data;
    const crc = crc32(data);
    if (offset + 30 + fileName.length + stored.length > 0xffffffff) throw new Error('Function package is larger than 4 GiB');
    const header = Buffer.alloc(30);
    header.writeUInt32LE(0x04034b50, 0); header.writeUInt16LE(20, 4); header.writeUInt16LE(0x0800, 6);
    header.writeUInt16LE(method, 8); header.writeUInt16LE(dosTime, 10); header.writeUInt16LE(dosDate, 12);
    header.writeUInt32LE(crc, 14); header.writeUInt32LE(stored.length, 18); header.writeUInt32LE(data.length, 22);
    header.writeUInt16LE(fileName.length, 26); header.writeUInt16LE(0, 28);
    local.push(header, fileName, stored);
    const record = Buffer.alloc(46);
    record.writeUInt32LE(0x02014b50, 0); record.writeUInt16LE(3 << 8 | 20, 4); record.writeUInt16LE(20, 6);
    record.writeUInt16LE(0x0800, 8); record.writeUInt16LE(method, 10); record.writeUInt16LE(dosTime, 12);
    record.writeUInt16LE(dosDate, 14); record.writeUInt32LE(crc, 16); record.writeUInt32LE(stored.length, 20);
    record.writeUInt32LE(data.length, 24); record.writeUInt16LE(fileName.length, 28);
    record.writeUInt32LE((mode << 16 | (directory ? 0x10 : 0)) >>> 0, 38); record.writeUInt32LE(offset, 42);
    central.push(record, fileName);
    offset += 30 + fileName.length + stored.length;
  }
  const directory = Buffer.concat(central);
  const end = Buffer.alloc(22);
  end.writeUInt32LE(0x06054b50, 0); end.writeUInt16LE(all.length, 8); end.writeUInt16LE(all.length, 10);
  end.writeUInt32LE(directory.length, 12); end.writeUInt32LE(offset, 16);
  if (all.length > 0xffff) throw new Error('Function package has more than 65535 files');
  return Buffer.concat([...local, directory, end]);
}
