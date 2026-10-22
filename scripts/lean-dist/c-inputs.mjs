// Pinned third-party inputs of the Lean C tier (c-tier-sources.json): clang's
// resource headers from the LLVM release matching Lean's clang, and C library
// headers (Ubuntu glibc + Linux UAPI headers, MinGW-w64 headers). Every input is
// verified against its pin and only the named directories are staged.
import { createReadStream, createWriteStream, mkdirSync } from 'node:fs';
import { readFile, stat } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { join, dirname } from 'node:path';
import { Readable } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress } from 'node:zlib';
import { fileURLToPath } from 'node:url';
import { Parser } from 'tar';

async function verify(file, pin) {
  const hash = createHash('sha256');
  let bytes = 0;
  for await (const chunk of createReadStream(file)) { hash.update(chunk); bytes += chunk.length; }
  if (bytes !== pin.bytes || hash.digest('hex') !== pin.sha256) throw new Error(`${file} does not match the pinned ${pin.name}`);
}

/** Members of a classic ar archive (.deb). */
export function arMembers(bytes) {
  if (bytes.toString('latin1', 0, 8) !== '!<arch>\n') throw new Error('Not an ar archive');
  const members = [];
  for (let at = 8; at + 60 <= bytes.length;) {
    const name = bytes.toString('latin1', at, at + 16).trim().replace(/\/$/, '');
    const size = Number(bytes.toString('latin1', at + 48, at + 58).trim());
    if (!Number.isSafeInteger(size) || bytes.toString('latin1', at + 58, at + 60) !== '`\n') throw new Error('Malformed ar header');
    members.push({ name, data: bytes.subarray(at + 60, at + 60 + size) });
    at += 60 + size + (size % 2);
  }
  return members;
}

const safe = path => path && !/[\\\0]/.test(path) && !path.startsWith('/') && path.split('/').every(part => part && part !== '.' && part !== '..');

/** Streams a tar(.zst) and stages regular files selected by `map(path) -> destination path | null`. */
async function stageTar(source, map, stage, members) {
  const parser = new Parser({ strict: true });
  const writes = [];
  let failure;
  parser.on('entry', entry => {
    try {
      const path = entry.path.replace(/^\.\//, '').replace(/\/$/, '');
      const destination = entry.type === 'Directory' ? null : map(path);
      if (!destination) { entry.resume(); return; }
      if (!['File', 'OldFile', 'ContiguousFile'].includes(entry.type)) throw new Error(`Unsupported member type ${entry.type}: ${path}`);
      if (!safe(path) || !safe(destination)) throw new Error(`Unsafe member ${path}`);
      if (members.has(destination)) throw new Error(`Two C tier inputs provide ${destination}`);
      const file = join(stage, ...destination.split('/'));
      mkdirSync(dirname(file), { recursive: true });
      members.set(destination, { path: destination, type: 'file', source: file, size: entry.size, executable: false });
      writes.push(pipeline(entry, createWriteStream(file, { flags: 'wx' })));
    } catch (error) { failure ??= error; entry.resume(); }
  });
  await pipeline(source, createZstdDecompress(), parser);
  await Promise.all(writes);
  if (failure) throw failure;
}

/** Stages the pinned inputs for one platform; returns archive members and their provenance. */
export async function stageCInputs({ sources, version, platform, download, stage, resourceDirectory, notices }) {
  const pins = sources[version];
  if (!pins) throw new Error(`No C tier inputs pinned for Lean ${version}`);
  const members = new Map(), provenance = [];
  const resource = pins.resourceHeaders;
  await verify(join(download, resource.name), resource);
  const prefix = `${resource.root}/${resource.path}/`;
  await stageTar(createReadStream(join(download, resource.name)),
    path => path.startsWith(prefix) ? `${resourceDirectory}/include/${path.slice(prefix.length)}` : null, stage, members);
  if (!members.has(`${resourceDirectory}/include/stddef.h`)) throw new Error('The LLVM release lacks clang resource headers');
  provenance.push({ name: resource.name, url: resource.url, sha256: resource.sha256, use: `clang ${pins.clangVersion} resource headers` });
  const licenses = [{ path: `${notices}/llvm-clang-LICENSE.txt`, source: resource.license }];
  const libc = pins.libc[platform];
  for (const pin of libc?.packages ?? []) {
    const file = join(download, pin.name);
    await verify(file, pin);
    const notice = `${notices}/${pin.name.replace(/[^A-Za-z0-9._-]/g, '_')}`;
    if (pin.format === 'deb') {
      const data = arMembers(await readFile(file)).find(member => member.name === 'data.tar.zst');
      if (!data) throw new Error(`${pin.name} has no data.tar.zst`);
      await stageTar(Readable.from([data.data]), path =>
        path.startsWith('usr/include/') ? `${libc.destination}/${path.slice('usr/include/'.length)}`
          : path === pin.copyright ? `${notice}/copyright` : null, stage, members);
    } else if (pin.format === 'msys2') {
      await stageTar(createReadStream(file), path =>
        path.startsWith(pin.include + '/') ? `${libc.destination}/${path.slice(pin.include.length + 1)}`
          : path.startsWith(pin.copyright + '/') ? `${notice}/${path.slice(pin.copyright.length + 1)}` : null, stage, members);
    } else throw new Error(`Unknown input format ${pin.format}`);
    if (![...members.keys()].some(path => path.startsWith(notice + '/'))) throw new Error(`${pin.name} has no license file`);
    provenance.push({ name: pin.name, url: pin.url, sha256: pin.sha256, use: 'C library headers' });
  }
  if (libc && !members.has(`${libc.destination}/stdio.h`)) throw new Error(`No stdio.h among the ${platform} C library headers`);
  const out = [...members.values()];
  for (const license of licenses) {
    const source = fileURLToPath(new URL(license.source, import.meta.url));
    out.push({ path: license.path, type: 'file', source, size: (await stat(source)).size, executable: false });
  }
  return { members: out, provenance, multiarch: libc?.multiarch ?? null, destination: libc?.destination ?? null };
}
