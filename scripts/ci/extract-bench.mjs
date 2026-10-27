// Tool-archive extraction benchmark (first-build cost, docs/BENCHMARKS.md):
// downloads Lean's tier archives and times ways of writing them to disk.
//   node scripts/ci/extract-bench.mjs NEW_WORK_DIR RESULT.json
import assert from 'node:assert/strict';
import { createReadStream, existsSync, mkdirSync, writeFileSync, readFileSync, openSync, writeSync, closeSync, rmSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress, zstdDecompressSync } from 'node:zlib';
import { availableParallelism, cpus } from 'node:os';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { x as extractTar, Parser } from 'tar';

const [workArg, outputArg] = process.argv.slice(2);
assert.ok(workArg && outputArg, 'Usage: node scripts/ci/extract-bench.mjs NEW_WORK_DIR RESULT.json');
const root = fileURLToPath(new URL('../../', import.meta.url));
const work = resolve(workArg), output = resolve(outputArg);
assert.ok(!existsSync(work)); mkdirSync(work, { recursive: true }); mkdirSync(dirname(output), { recursive: true });
const release = JSON.parse(readFileSync(join(root, 'src/toolchains.json'), 'utf8')).lean['4.36.0-rc1'].tiers;
const archives = [...release.core, ...release.extended];
const result = { platform: `${process.platform}-${process.arch}`, cpus: availableParallelism(), cpu: cpus()[0]?.model, runs: [] };
const save = () => writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
for (const a of archives) {
  const file = join(work, a.name);
  const t = performance.now();
  const response = await fetch(a.url);
  assert.equal(response.status, 200);
  writeFileSync(file, Buffer.from(await response.arrayBuffer()));
  assert.equal(createHash('sha256').update(readFileSync(file)).digest('hex'), a.sha256);
  result.runs.push({ method: 'download', archive: a.name, seconds: (performance.now() - t) / 1000 });
}
save();
const time = async (method, list, run) => {
  const t = performance.now();
  await run();
  const seconds = (performance.now() - t) / 1000;
  result.runs.push({ method, archives: list.map(a => a.name), seconds }); save();
  console.log(`${seconds.toFixed(1).padStart(6)} s  ${method}  ${list.map(a => a.name).join(', ')}`);
};
let counter = 0;
const target = () => { const d = join(work, `out-${counter++}`); mkdirSync(d); return d; };
// As src/managed-artifacts.mjs does today.
const nodeTar = (a, options = {}) => { const cwd = target(); return pipeline(createReadStream(join(work, a.name)), createZstdDecompress(),
  extractTar({ cwd, strip: 1, strict: true, preservePaths: false, preserveOwner: false, ...options })); };
// Parse with node-tar, write each file synchronously (one open/write/close).
const syncWriter = async a => {
  const cwd = target(), made = new Set([cwd]);
  const parser = new Parser({ strict: true });
  parser.on('entry', entry => {
    const name = entry.path.split('/').slice(1).join('/');
    if (!name) { entry.resume(); return; }
    const path = join(cwd, name);
    if (entry.type === 'Directory') { if (!made.has(path)) { mkdirSync(path, { recursive: true }); made.add(path); } entry.resume(); return; }
    if (entry.type !== 'File') { entry.resume(); return; }
    const parent = dirname(path); if (!made.has(parent)) { mkdirSync(parent, { recursive: true }); made.add(parent); }
    const chunks = [];
    entry.on('data', chunk => chunks.push(chunk));
    entry.on('end', () => { const fd = openSync(path, 'w', entry.mode & 0o777 | 0o600); for (const c of chunks) writeSync(fd, c); closeSync(fd); });
  });
  await pipeline(createReadStream(join(work, a.name)), createZstdDecompress(), parser);
};
const hashTree = async directory => {
  const { readdir } = await import('node:fs/promises');
  let n = 0;
  const walk = async d => { for (const e of await readdir(d, { withFileTypes: true })) {
    const p = join(d, e.name); if (e.isDirectory()) await walk(p);
    else { const h = createHash('sha256'); for await (const b of createReadStream(p)) h.update(b); h.digest(); n++; } } };
  await walk(directory); return n;
};
const one = archives.find(a => /core-init/.test(a.name));
const extended = release.extended;
await time('node-tar (current)', [one], () => nodeTar(one));
await time('node-tar, noMtime and noChmod', [one], () => nodeTar(one, { noMtime: true, noChmod: true }));
await time('node-tar, maxDepth default, jobs 16', [one], () => nodeTar(one, { jobs: 16, noMtime: true }));
await time('sync writer', [one], () => syncWriter(one));
await time('decompress only (zstd to memory)', [one], async () => { zstdDecompressSync(readFileSync(join(work, one.name))); });
await time('node-tar (current), extended tiers one after another', extended, async () => { for (const a of extended) await nodeTar(a); });
await time('node-tar (current), extended tiers in parallel', extended, () => Promise.all(extended.map(a => nodeTar(a))));
await time('sync writer, extended tiers one after another', extended, async () => { for (const a of extended) await syncWriter(a); });
const hashed = join(work, 'out-0');
await time('hash every extracted file (verify step), core-init', [one], () => hashTree(hashed));
result.finishedAt = new Date().toISOString(); save();
rmSync(work, { recursive: true, force: true });
