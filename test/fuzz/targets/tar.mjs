// Lasm's tar reader and writer (src/tar.mjs, which reads every tool archive and
// npm package Lasm installs) against Python's tarfile (test/fuzz/support/tar-oracle.py).
// Input: the first byte picks the mode.
//   bit 0 = 0: the rest is an archive. With bit 1 set, the checksum of every
//      block where a header is expected is recomputed first, so the input
//      reaches the fields behind the checksum.
//   bit 0 = 1: the rest is read field by field (test/fuzz/input.mjs) into
//      entries (names, types, modes, times, link names, data), which the
//      writer writes; the reader must read back exactly those entries.
// Oracle: when Lasm's reader accepts an archive, tarfile accepts it too and
// reads the same entries: paths, types, permission bits, sizes, link paths of
// links, and each file's bytes. Lasm may refuse what tarfile accepts (it is
// stricter: see src/tar.mjs); every refusal is a plain "Invalid tar archive"
// error. Normalizations: trailing slashes of paths (tarfile drops a
// directory's), and no verdict when a header with a non-POSIX magic has a
// non-empty prefix field (tarfile joins it, POSIX and GNU tar do not).
// The oracle needs Python 3 (required in CI); without it only the round
// trip and the refusals are checked.
import { spawn, spawnSync } from 'node:child_process';
import { createInterface } from 'node:readline';
import { fileURLToPath } from 'node:url';
import { Input } from '../input.mjs';
import { TarParser, tarBytes, tarHeader } from '../../../src/tar.mjs';

export const sources = ['src/tar.mjs'];
export const maxLength = 8192;
export const dictionary = ['ustar\x0000', 'ustar  \0', '././@LongLink', '././@PaxHeader', 'path=', 'linkpath=', 'size=', 'mtime=',
  'GNU.sparse.size=', 'hdrcharset=', 'comment=', '0000644\0', '0000755\0', '00000000000\0', '77777777777\0', ' 9 ', '\n',
  [0x80], [0xff], [0], [0x30], [0x35], [0x32], [0x31], [0x78], [0x67], [0x4c], [0x4b], [0x37], [0x53], [0xc3, 0xa9], [0xed, 0xa0, 0x80]];

const oracleScript = fileURLToPath(new URL('../support/tar-oracle.py', import.meta.url));

/** A Python 3 with tarfile, or null. */
export function findPython() {
  return ['python3', 'python'].find(name => spawnSync(name, ['-I', '-c', 'import tarfile, sys; sys.exit(sys.version_info < (3, 8))'], { stdio: 'ignore' }).status === 0) ?? null;
}

/** A long-running tarfile: ask(bytes) resolves to its reading. */
function startOracle(python) {
  const child = spawn(python, ['-I', oracleScript], { stdio: ['pipe', 'pipe', 'inherit'] });
  const waiting = [];
  // Referenced only while an answer is awaited, so the oracle never keeps a process alive.
  const idle = () => { child.unref(); child.stdin.unref(); child.stdout.unref(); };
  createInterface({ input: child.stdout }).on('line', line => { waiting.shift()?.(JSON.parse(line)); if (!waiting.length) idle(); });
  idle();
  return { ask: bytes => new Promise(resolve => {
    waiting.push(resolve); child.ref(); child.stdout.ref();
    child.stdin.write(Buffer.from(bytes).toString('hex') + '\n');
  }) };
}

let oracle;
export async function setup() {
  const python = findPython();
  if (!python && process.env.CI) throw new Error('The tar fuzz target needs Python 3 in CI');
  if (python) oracle = startOracle(python);
}

const fail = (message, detail) => {
  throw Object.assign(new Error(`${message}\n${JSON.stringify(detail, null, 1)?.slice(0, 3000)}`), { name: 'OracleFailure' });
};
const strip = path => path.replace(/\/+$/, '');
const links = new Set(['Link', 'SymbolicLink']);

/** Lasm's reading of an archive: { entries } or { refused }. */
function ours(bytes) {
  const entries = [];
  try {
    const parser = new TarParser(entry => {
      const chunks = [];
      entries.push(entry);
      return { data: chunk => chunks.push(Buffer.from(chunk)), end: () => { entry.data = Buffer.concat(chunks); } };
    });
    parser.write(bytes);
    parser.end();
  } catch (error) {
    if (error?.code !== 'LASM_TAR_INVALID' || !/^Invalid tar archive: /.test(error.message)) fail(`the reader threw ${error?.name}: ${error?.message}`, { stack: error?.stack });
    return { refused: error.message };
  }
  return { entries };
}

const comparable = entries => entries.map(e => ({ path: Buffer.from(strip(e.path)).toString('hex'), type: e.type, mode: e.mode & 0o7777,
  size: e.size, linkpath: links.has(e.type) ? Buffer.from(e.linkpath).toString('hex') : '', data: e.type === 'File' ? e.data.toString('hex') : '' }));
const fromOracle = entries => entries.map(e => ({ path: Buffer.from(strip(Buffer.from(e.path, 'hex').toString('latin1')), 'latin1').toString('hex'),
  type: e.type, mode: e.mode, size: e.size, linkpath: links.has(e.type) ? e.linkpath : '', data: e.type === 'File' ? e.data : '' }));

/** Offsets of the blocks read as headers (as src/tar.mjs walks them), for the
 * checksum fix-up and the prefix normalization. */
function headerOffsets(bytes) {
  const offsets = [];
  for (let at = 0; at + 512 <= bytes.length;) {
    const block = bytes.subarray(at, at + 512);
    if (block.every(b => b === 0)) break;
    offsets.push(at);
    const field = block.subarray(124, 136);
    let size;
    if (field[0] === 0x80) { size = 0; for (const b of field.subarray(1)) size = size * 256 + b; }
    else {
      const text = String.fromCharCode(...field.subarray(0, field.indexOf(0) < 0 ? 12 : field.indexOf(0))).trim();
      if (!/^[0-7]*$/.test(text)) break;
      size = text ? parseInt(text, 8) : 0;
    }
    if (!Number.isSafeInteger(size) || size > bytes.length) break;
    at += 512 + Math.ceil(size / 512) * 512;
  }
  return offsets;
}

function fixChecksums(bytes) {
  const out = Buffer.from(bytes);
  for (const at of headerOffsets(out)) {
    out.fill(0x20, at + 148, at + 156);
    let sum = 0;
    for (let i = at; i < at + 512; i++) sum += out[i];
    out.write(sum.toString(8).padStart(6, '0') + '\0 ', at + 148, 'latin1');
  }
  return out;
}

/** No verdict: a non-POSIX header with a prefix field, which tarfile reads as part of the name. */
const prefixAmbiguity = bytes => headerOffsets(bytes).some(at => bytes.toString('latin1', at + 257, at + 263) !== 'ustar\0'
  && bytes.subarray(at + 345, at + 500).some(b => b !== 0));

/** Lasm's verdict and tarfile's on one archive. */
export async function compare(bytes, python) {
  const mine = ours(bytes);
  const result = { ours: mine.refused ? 'refused' : 'accepted', reason: mine.refused };
  const ask = python ? (oracle ??= startOracle(python)).ask : oracle?.ask;
  if (!ask || mine.refused || prefixAmbiguity(bytes)) return result;
  const theirs = await ask(bytes);
  result.python = theirs.ok ? 'accepted' : theirs.error;
  result.same = theirs.ok && JSON.stringify(comparable(mine.entries)) === JSON.stringify(fromOracle(theirs.entries));
  if (!result.same) Object.assign(result, { lasm: comparable(mine.entries), tarfile: theirs.ok ? fromOracle(theirs.entries) : null });
  return result;
}

async function check(bytes) {
  const verdict = await compare(bytes);
  if (verdict.ours === 'accepted' && verdict.same === false) fail('Lasm reads entries tarfile does not', { archive: Buffer.from(bytes).toString('hex').slice(0, 4000), ...verdict });
}

const types = ['File', 'File', 'File', 'Directory', 'SymbolicLink', 'Link', 'CharacterDevice', 'FIFO'];
/** Entries from fields: type, path, link path, mode, time, data. */
function entriesFrom(input) {
  const entries = [];
  while (!input.done && entries.length < 12) {
    const type = input.pick(types);
    const path = input.text().replace(/\0/g, '') || 'n';
    const linkpath = links.has(type) ? input.text().replace(/\0/g, '') || 't' : '';
    const mode = input.int(0o10000), mtime = input.bool() ? input.int(2 ** 16) * 2 ** 20 : input.int(2 ** 16);
    const data = type === 'File' ? input.field() : undefined;
    entries.push({ path: type === 'Directory' && !path.endsWith('/') ? path + '/' : path, type, mode, mtime, linkpath, data });
  }
  return entries;
}

export async function run(bytes) {
  const mode = bytes[0] ?? 0;
  if (mode & 1) {
    const entries = entriesFrom(new Input(bytes.subarray(1)));
    const archive = tarBytes(entries);
    const back = ours(archive);
    if (back.refused) fail(`the reader refuses what the writer wrote: ${back.refused}`, { entries });
    const expected = entries.map(e => ({ path: e.path, type: e.type, mode: e.mode, mtime: e.mtime, linkpath: e.linkpath,
      data: Buffer.from(e.data ?? []).toString('hex') }));
    const actual = back.entries.map(e => ({ path: e.path, type: e.type, mode: e.mode, mtime: e.mtime, linkpath: links.has(e.type) ? e.linkpath : '',
      data: e.data.toString('hex') }));
    if (JSON.stringify(actual) !== JSON.stringify(expected)) fail('the reader reads back other entries than the writer wrote', { expected, actual });
    await check(archive);
  } else {
    const archive = Buffer.from(bytes.subarray(1));
    await check(mode & 2 ? fixChecksums(archive) : archive);
  }
}

export function seeds() {
  const out = [];
  const add = (mode, bytes) => out.push(Uint8Array.from([mode, ...bytes]));
  add(0, tarBytes([{ path: 'a', data: 'abc' }, { path: 'd/', type: 'Directory' }, { path: 'd/s', type: 'SymbolicLink', linkpath: '../a' },
    { path: 'd/h', type: 'Link', linkpath: 'a' }]));
  add(0, tarBytes([{ path: 'p/'.repeat(70) + 'long', data: 'x' }, { path: 'é', type: 'SymbolicLink', linkpath: 'l'.repeat(120) }]));
  const header = (fields, data = '') => {
    const h = Buffer.from(tarHeader({ path: 'n', size: Buffer.byteLength(data), ...fields }));
    return Buffer.concat([h, Buffer.from(data), Buffer.alloc((512 - Buffer.byteLength(data) % 512) % 512)]);
  };
  const end = Buffer.alloc(1024);
  // GNU long names, a global pax header, the old '\0' flag, a GNU magic with a prefix, base-256 sizes.
  add(2, Buffer.concat([header({ path: '././@LongLink', type: 'L' }, 'gnu/long/name\0'), header({ path: 'short' }, 'body'), end]));
  add(2, Buffer.concat([header({ path: 'pax_global_header', type: 'g' }, '19 comment=abcdefg\n'), header({ path: 'x' }), end]));
  add(2, Buffer.concat([header({ path: 'PaxHeader', type: 'x' }, '13 path=pax\n12 size=10\n'), header({ path: 'x' }), Buffer.alloc(512), end]));
  const old = header({ path: 'old/' }); old.write('\0', 156, 'latin1'); add(2, Buffer.concat([old, end]));
  const gnu = header({ path: 'g' }); gnu.write('ustar  \0', 257, 'latin1'); gnu.write('pre', 345, 'latin1'); add(2, Buffer.concat([gnu, end]));
  const big = header({ path: 'b' }, 'abc'); Buffer.from([0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3]).copy(big, 124); add(2, Buffer.concat([big, end]));
  for (const k of [0, 1, 2, 3, 4, 5, 6, 7]) add(1, [k, 0x61, 0x2f, 0x62, 0, 0x74, 0, 0x81, 0xa4, 0x10, 0x20, 0x68, 0x69, 0, 1, 0x63, 0]);
  return out;
}
