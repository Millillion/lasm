#!/usr/bin/env node
// Compare two build-sysroot.mjs archives built on different hosts.
//
//   node scripts/link-driver/compare-sysroots.mjs A.tar.zst B.tar.zst [--json FILE]
//
// Emscripten's libc build walks musl's source tree in directory-listing order
// (tools/system_libs.py: os.walk without sorting) and renames the second of two
// case-insensitively equal object names (_Exit.c and _exit.c) to NAME__1.o, so
// which member gets the suffix depends on the building host's filesystem. Such
// archives are reported as "equivalent": the same members in the same order with
// byte-identical contents, differing only in member names. Every other file must
// be byte-identical. Exit status: 0 identical or equivalent, 1 otherwise.
import { createReadStream, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress } from 'node:zlib';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { Parser } from 'tar';

const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');

/** Members of a GNU/BSD `ar` archive: name, size and content digest, in order. */
export function arMembers(bytes) {
  if (bytes.toString('latin1', 0, 8) !== '!<arch>\n') throw new Error('Not an ar archive');
  const members = [];
  let longNames = '', offset = 8;
  while (offset + 60 <= bytes.length) {
    const header = bytes.toString('latin1', offset, offset + 60);
    if (header.slice(58, 60) !== '`\n') throw new Error(`Malformed ar header at ${offset}`);
    let name = header.slice(0, 16).trimEnd();
    const size = Number(header.slice(48, 58).trim());
    let start = offset + 60;
    const content = bytes.subarray(start, start + size);
    if (name === '//') longNames = content.toString('latin1');
    else if (name !== '/' && name !== '/SYM64/') {
      if (/^\/\d+$/.test(name)) { const at = Number(name.slice(1)); name = longNames.slice(at, longNames.indexOf('\n', at)); }
      else if (name.startsWith('#1/')) { const length = Number(name.slice(3)); name = content.toString('latin1', 0, length); start += length; }
      const data = bytes.subarray(start, offset + 60 + size);
      members.push({ name: name.replace(/\/$/, ''), size: data.length, sha256: sha256(data) });
    }
    offset += 60 + size + (size % 2);
  }
  return members;
}

async function readArchive(file) {
  const files = new Map(), writes = [];
  const parser = new Parser({ strict: true });
  parser.on('entry', entry => {
    if (entry.type !== 'File') { entry.resume(); return; }
    const chunks = [];
    const path = entry.path.split('/').slice(1).join('/');
    writes.push(new Promise((resolve, reject) => {
      entry.on('data', chunk => chunks.push(chunk)); entry.on('end', () => { files.set(path, Buffer.concat(chunks)); resolve(); });
      entry.on('error', reject);
    }));
  });
  await pipeline(createReadStream(file), createZstdDecompress(), parser);
  await Promise.all(writes);
  return files;
}

export async function compareSysroots(fileA, fileB) {
  const [a, b] = await Promise.all([readArchive(fileA), readArchive(fileB)]);
  const result = { identical: [], equivalent: [], different: [], missing: [] };
  for (const path of [...new Set([...a.keys(), ...b.keys()])].sort()) {
    if (!a.has(path) || !b.has(path)) { result.missing.push({ path, in: a.has(path) ? 'A' : 'B' }); continue; }
    const x = a.get(path), y = b.get(path);
    if (x.equals(y)) { result.identical.push(path); continue; }
    if (path.endsWith('.a')) {
      const membersA = arMembers(x), membersB = arMembers(y);
      const renamed = membersA.map((member, index) => [member, membersB[index]]).filter(([m, n]) => m.name !== n?.name)
        .map(([m, n]) => ({ a: m.name, b: n?.name }));
      if (membersA.length === membersB.length && membersA.every((member, index) => member.sha256 === membersB[index].sha256)) {
        result.equivalent.push({ path, members: membersA.length, renamed }); continue;
      }
    }
    result.different.push({ path, bytesA: x.length, bytesB: y.length });
  }
  result.ok = !result.different.length && !result.missing.length;
  return { ...result, identical: result.identical.length };
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const { values: options, positionals } = parseArgs({ allowPositionals: true, options: { json: { type: 'string' } } });
  if (positionals.length !== 2) throw new Error('Usage: compare-sysroots.mjs A.tar.zst B.tar.zst [--json FILE]');
  const result = await compareSysroots(...positionals);
  if (options.json) writeFileSync(options.json, JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result, null, 2));
  process.exit(result.ok ? 0 : 1);
}
