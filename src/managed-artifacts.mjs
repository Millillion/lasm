import { createReadStream, readdirSync, lstatSync, readFileSync, mkdirSync, openSync, writeSync, closeSync } from 'node:fs';
import { mkdir, readFile, readdir, readlink, lstat, realpath, rename, writeFile, symlink, link, copyFile } from 'node:fs/promises';
import { constants } from 'node:fs';
import { dirname, join, resolve, relative, isAbsolute, posix } from 'node:path';
import { homedir } from 'node:os';
import { createHash } from 'node:crypto';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress, createGunzip } from 'node:zlib';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { Parser as TarParser } from 'tar';
import { isDeepStrictEqual } from 'node:util';
import { downloadArtifact } from './managed-download.mjs';
import { acquireArtifact } from './npm-artifacts.mjs';
import { withCacheEntryLock, removeOwnedStaging, createOwnedStaging, storageDiagnostic, checkDownloadSpace } from './cache-lifecycle.mjs';

const digest = value => createHash('sha256').update(value).digest('hex');
const pending = new Map();
const receiptName = '.lasm-artifact.json';
const inside = (directory, file) => {
  const name = relative(directory, file);
  return name !== '..' && !name.startsWith('..' + (process.platform === 'win32' ? '\\' : '/')) && !isAbsolute(name);
};

export function managedCacheDirectory(env = process.env, platform = process.platform) {
  if (env.LASM_TOOLCHAIN_CACHE) return resolve(env.LASM_TOOLCHAIN_CACHE);
  if (platform === 'win32') return join(env.LOCALAPPDATA ?? join(homedir(), 'AppData', 'Local'), 'lasm', 'Cache');
  if (platform === 'darwin') return join(homedir(), 'Library', 'Caches', 'lasm');
  return join(env.XDG_CACHE_HOME ?? join(homedir(), '.cache'), 'lasm');
}

/** Hash large compiler archives without holding the archive in memory. */
export async function hashFile(file) {
  const hash = createHash('sha256');
  for await (const bytes of createReadStream(file)) hash.update(bytes);
  return hash.digest('hex');
}

/** The same final check downloadArtifact applies, for archives from npm packages. */
export async function verifyArchiveFile(artifact, file) {
  const hash = createHash('sha256');
  let bytes = 0;
  for await (const chunk of createReadStream(file)) { hash.update(chunk); bytes += chunk.length; }
  if (bytes !== artifact.bytes || hash.digest('hex') !== artifact.sha256)
    throw Object.assign(new Error(`Checksum or size mismatch: ${artifact.name}`), { code: 'LASM_INTEGRITY' });
}

export function validateArtifact(artifact) {
  if (!artifact || !/^[a-zA-Z0-9][a-zA-Z0-9._-]*$/.test(artifact.name ?? '')
      || !(artifact.root === '.' || /^[a-zA-Z0-9][a-zA-Z0-9._-]*$/.test(artifact.root ?? ''))
      || !/^[a-f0-9]{64}$/.test(artifact.sha256 ?? '')
      || !Number.isSafeInteger(artifact.bytes) || artifact.bytes <= 0
      || !Number.isSafeInteger(artifact.maximumExtractedBytes) || artifact.maximumExtractedBytes <= 0
      || !['tar.zst', 'tar.gz', 'tar.xz', 'zip'].includes(artifact.format)) throw new Error('Invalid managed artifact description');
  const url = new URL(artifact.url);
  if (url.protocol !== 'https:' || url.username || url.password) throw new Error('Managed artifacts require an HTTPS URL without credentials');
  return digest(JSON.stringify(artifact));
}

function cleanArchivePath(name) {
  const parts = name.replace(/\/$/, '').split('/');
  return !!name && !/[\\:\0]/.test(name) && parts.every(part => part && part !== '.' && part !== '..');
}

/** Writes the accepted regular files and directories of a tar stream under
 * `directory`, synchronously one file at a time (node-tar's asynchronous
 * writer was 2-4x slower on Windows and macOS for Lean's many small files),
 * hashing each file from the bytes it writes (`hashes`: name -> sha256, size).
 * Links are never written here (accept defers them); with no link in the
 * tree yet, no write can be redirected outside it. */
function archiveWriter(directory, { strip, accept, hashes, failed }) {
  const parser = new TarParser({ strict: true });
  const made = new Set([directory]);
  const ensure = path => { if (!made.has(path)) { mkdirSync(path, { recursive: true }); made.add(path); } };
  parser.on('entry', entry => {
    if (failed() || !accept(entry.path, entry)) { entry.resume(); return; }
    const name = entry.path.replace(/^\.\//, '').replace(/\/$/, '').split('/').slice(strip).join('/');
    if (!name) { entry.resume(); return; }
    const target = join(directory, ...name.split('/'));
    if (entry.type === 'Directory') { ensure(target); entry.resume(); return; }
    ensure(dirname(target));
    const fd = openSync(target, 'wx', (entry.mode ?? 0o644) & 0o777 | 0o600);
    const hash = createHash('sha256');
    let bytes = 0, open = true;
    const close = () => { if (open) { open = false; closeSync(fd); } };
    entry.on('data', chunk => {
      try { writeSync(fd, chunk); } catch (error) { close(); parser.abort(error); return; }
      hash.update(chunk); bytes += chunk.length;
    });
    entry.on('end', () => { close(); hashes?.set(name, { sha256: hash.digest('hex'), size: bytes }); });
  });
  return parser;
}

async function extract(artifact, archive, directory, python, hashes) {
  // macOS /var and Windows short-path temp directories are aliases. Compare
  // resolved link targets with the same physical root, not its lexical alias.
  directory = await realpath(directory);
  const space = await checkDownloadSpace(directory, 0);
  let occupied = 0n;
  let error, total = 0;
  const rootless = artifact.root === '.';
  const seen = new Set();
  const links = [];
  // Which entries are written (the others are rejected or, for links, deferred).
  const accept = (name, entry) => {
      if (error) return false;
      const canonical = (rootless ? name.replace(/^\.\//, '') : name).replace(/\/$/, '');
      if (rootless && (canonical === '.' || canonical === '') && entry.type === 'Directory') return false;
      const valid = cleanArchivePath(canonical) && (rootless || canonical === artifact.root || canonical.startsWith(artifact.root + '/'))
        && !seen.has(canonical) && ['File', 'Directory', 'SymbolicLink', 'Link'].includes(entry.type);
      if (!valid) { error = new Error(`Unsafe or duplicate archive entry: ${name}`); return false; }
      seen.add(canonical);
      if (['SymbolicLink', 'Link'].includes(entry.type)) {
        const target = entry.linkpath;
        const destination = entry.type === 'Link' ? posix.normalize(target) : posix.join(posix.dirname(canonical), target);
        if (!target || /[\\:\0]/.test(target) || posix.isAbsolute(target)
            || !(rootless ? cleanArchivePath(destination) : destination.startsWith(artifact.root + '/'))) {
          error = new Error(`Archive link escapes its toolchain: ${name}`); return false;
        }
        links.push({ name: rootless ? canonical : canonical.slice(artifact.root.length + 1), target,
          destination: rootless ? destination : destination.slice(artifact.root.length + 1), type: entry.type });
        // Create links only after every ordinary file has finished extracting.
        // Official compiler archives contain safe chains such as libunwind.so
        // -> libunwind.so.1 -> libunwind.so.1.0. Tar's hardened writer rejects
        // these during extraction, and early links could redirect later writes.
        return false;
      }
      total += entry.size ?? 0;
      if (!Number.isSafeInteger(total) || total > artifact.maximumExtractedBytes) {
        error = new Error(`Extracted artifact exceeds its size limit: ${artifact.name}`); return false;
      }
      if (space) {
        // Account conservatively for allocation rounding and directory entries.
        const block = space.blockSize > 0n ? space.blockSize : 4096n;
        occupied += ((BigInt(entry.size ?? 0) + block - 1n) / block + 1n) * block;
        if (occupied > space.available) {
          error = Object.assign(new Error(`Insufficient free space while extracting ${artifact.name}`), { code: 'ENOSPC' });
          return false;
        }
      }
      return true;
  };
  const unpack = archiveWriter(directory, { strip: rootless ? 0 : 1, accept, hashes, failed: () => error });
  if (['tar.xz', 'zip'].includes(artifact.format)) {
    const child = spawn(python, ['-I', '-B', fileURLToPath(new URL('./archive-stream.py', import.meta.url)), artifact.format, archive],
      { stdio: ['ignore', 'pipe', 'pipe'], windowsHide: true });
    let diagnostic = '';
    child.stderr.setEncoding('utf8');
    child.stderr.on('data', text => { diagnostic = (diagnostic + text).slice(-8192); });
    const finished = new Promise(resolve => {
      child.once('error', error => resolve({ error }));
      child.once('close', (code, signal) => resolve({ code, signal }));
    });
    try {
      await pipeline(child.stdout, unpack);
      const result = await finished;
      if (result.error) throw result.error;
      if (result.code !== 0) throw new Error(`SDK archive decoder failed (${result.code ?? result.signal}): ${diagnostic}`);
    } finally {
      if (child.exitCode === null && child.signalCode === null) child.kill();
      await finished;
    }
  } else {
    const decompressor = artifact.format === 'tar.gz' ? createGunzip() : createZstdDecompress();
    await pipeline(createReadStream(archive), decompressor, unpack);
  }
  if (error) throw error;
  for (const entry of links) {
    const parent = dirname(join(directory, entry.name));
    await mkdir(parent, { recursive: true });
    if (!inside(directory, await realpath(parent))) throw new Error(`Archive link parent escapes its toolchain: ${entry.name}`);
  }
  // Symlinks may refer forward to one another; inventory validates the complete
  // resolved graph, including dangling links, cycles and directory escapes.
  for (const entry of links.filter(entry => entry.type === 'SymbolicLink'))
    await symlink(entry.target, join(directory, entry.name));
  let remaining = links.filter(entry => entry.type === 'Link');
  while (remaining.length) {
    const next = [];
    for (const entry of remaining) {
      try {
        const from = join(directory, entry.destination), to = join(directory, entry.name);
        if (!inside(directory, await realpath(from)) || !inside(directory, await realpath(dirname(to))))
          throw new Error(`Archive hardlink escapes its toolchain: ${entry.name}`);
        await link(from, to);
      } catch (error) { if (error.code !== 'ENOENT') throw error; next.push(entry); }
    }
    if (next.length === remaining.length) throw new Error('Archive has unresolved or cyclic hardlinks');
    remaining = next;
  }
}

async function inventory(directory, { known, extracted } = {}) {
  directory = await realpath(directory);
  const files = new Map();
  async function walk(base) {
    for (const entry of (await readdir(base, { withFileTypes: true })).sort((a, b) => a.name < b.name ? -1 : a.name > b.name ? 1 : 0)) {
      const file = join(base, entry.name), name = relative(directory, file).split(process.platform === 'win32' ? '\\' : '/').join('/');
      if (name === receiptName) continue;
      if (entry.isDirectory()) { files.set(name, { type: 'directory' }); await walk(file); }
      else if (entry.isSymbolicLink()) {
        const target = await readlink(file);
        if (isAbsolute(target) || !inside(directory, resolve(dirname(file), target)) || !inside(directory, await realpath(file)))
          throw new Error(`Managed cache link escapes its toolchain: ${name}`);
        files.set(name, { type: 'symlink', target });
      } else if (entry.isFile()) {
        const stat = await lstat(file, { bigint: true });
        // A hard link to a verified original made by this assembly (linkArtifactTree).
        const same = known?.get(name);
        // Or a file this process just extracted into its private staging tree,
        // hashed from the archive stream (extract).
        const written = extracted?.get(name);
        const sha256 = same && same.size === stat.size ? same.sha256
          : written && BigInt(written.size) === stat.size ? written.sha256 : await hashFile(file);
        files.set(name, { type: 'file', bytes: Number(stat.size), sha256,
          ...(process.platform === 'win32' ? {} : { executable: !!(Number(stat.mode) & 0o111) }) });
      } else throw new Error(`Unexpected managed cache entry: ${name}`);
    }
  }
  await walk(directory);
  return Object.fromEntries(files);
}

/** A cheap fingerprint of a tree's metadata: every entry's name, type and
 * permissions, size, inode and modification time (nanoseconds). Writing or
 * truncating a file changes its modification time, replacing it changes the
 * inode. The change time is left out on purpose: hard-linking a verified file
 * into another tool prefix (Lean's tiers, Windows tool paths) changes it
 * without changing any byte, which made the next build re-hash the prefix. */
export function treeFingerprint(directory) {
  const hash = createHash('sha256');
  const walk = (base, prefix) => {
    for (const entry of readdirSync(base, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : a.name > b.name ? 1 : 0)) {
      const file = join(base, entry.name), name = prefix + entry.name;
      const stat = lstatSync(file, { bigint: true });
      hash.update(`${name}\0${stat.mode}\0${stat.size}\0${stat.ino}\0${stat.dev}\0${stat.mtimeNs}\n`);
      if (stat.isDirectory()) walk(file, name + '/');
    }
  };
  walk(directory, '');
  return hash.digest('hex');
}

/** Run `verify` (a full content check of `directory`) unless this machine
 * already verified the same tree and no file's metadata changed since: the
 * record (in `stamps`, inside the managed cache) holds the tree fingerprint
 * taken before and after a successful full check. Without `stamps` (cache
 * repair, release tooling) the full check always runs. */
/** `lasm dev` (one long-lived build service): a tree verified once in this
 * process is not walked again on each rebuild. Ordinary commands still stat
 * every file on every build. */
const sessionVerified = new Set();
let sessionTrust = false;
export function trustVerifiedTreesForSession(enabled = true) { sessionTrust = enabled; if (!enabled) sessionVerified.clear(); }
export const sessionTrusted = () => sessionTrust;

export async function verifyTreeOnce(stamps, key, directory, verify) {
  if (sessionTrust && sessionVerified.has(key + '\0' + directory)) return;
  await verifyTreeOnceUncached(stamps, key, directory, verify);
  if (sessionTrust) sessionVerified.add(key + '\0' + directory);
}

async function verifyTreeOnceUncached(stamps, key, directory, verify) {
  if (!stamps) return verify();
  const record = join(stamps, digest(key) + '.json');
  const before = treeFingerprint(directory);
  try {
    const previous = JSON.parse(readFileSync(record, 'utf8'));
    if (previous.schema === 1 && previous.key === key && previous.fingerprint === before) return;
  } catch { /* No usable record: verify fully. */ }
  await verify();
  // A file changed while it was being hashed is not recorded as verified.
  if (treeFingerprint(directory) !== before) return;
  await writeVerificationRecord(record, key, before);
}

/** A tree whose receipt was just computed from its bytes (a new install or
 * derivation) is recorded as verified, so its first reuse is not re-hashed. */
export async function recordTreeVerified(stamps, key, directory) {
  if (!stamps) return;
  await writeVerificationRecord(join(stamps, digest(key) + '.json'), key, treeFingerprint(directory));
}

async function writeVerificationRecord(record, key, fingerprint) {
  const stamps = dirname(record), before = fingerprint;
  try {
    await mkdir(stamps, { recursive: true });
    const partial = `${record}.${process.pid}.${Date.now()}.partial`;
    await writeFile(partial, JSON.stringify({ schema: 1, key, fingerprint: before }) + '\n');
    await rename(partial, record);
  } catch { /* An unwritable record only costs the next build a full check. */ }
}
export const verificationRecords = cache => join(resolve(cache), 'verified');

export async function verifyArtifactDirectory(directory, identity, { stamps } = {}) {
  if (!(await lstat(directory)).isDirectory() || !(await lstat(join(directory, receiptName))).isFile())
    throw new Error(`Managed artifact directory and receipt must not be symbolic links: ${directory}`);
  const receipt = JSON.parse(await readFile(join(directory, receiptName), 'utf8'));
  if (receipt.schema !== 1 || receipt.identity !== identity || !receipt.files || !Object.keys(receipt.files).length)
    throw new Error('Managed artifact receipt does not match the requested toolchain');
  await verifyTreeOnce(stamps, artifactRecordKey(identity, directory), directory, async () => {
    const observed = await inventory(directory);
    if (!isDeepStrictEqual(observed, receipt.files)) {
      const changed = [...new Set([...Object.keys(receipt.files), ...Object.keys(observed)])]
        .filter(name => !isDeepStrictEqual(observed[name], receipt.files[name]));
      throw new Error(`Managed cache contents changed: ${directory}. Changed entries (${changed.length}): ` +
        changed.slice(0, 10).map(name => JSON.stringify(name)).join(', ') +
        (changed.length > 10 ? ', ...' : '') + '. Run lasm cache repair, then retry to download a verified replacement.');
    }
  });
  return receipt;
}
// Builds re-check a cached tool fully only when its files' metadata changed.
const verify = (directory, identity, cache) => verifyArtifactDirectory(directory, identity, { stamps: verificationRecords(cache) });
const artifactRecordKey = (identity, directory) => `managed-artifact\0${identity}\0${resolve(directory)}`;

/** Install into a private staging directory; expose only a verified complete tree.
 * An OS-owned per-artifact lock shares installs across independent processes.
 * A process death releases the lock; its exact owned staging is reclaimed.
 */
export async function provisionArtifact(artifact, { cache = managedCacheDirectory(), fetch: fetch_ = fetch, log = console.error, python,
  progress, label = artifact.name, signal, download = {}, npm, env = process.env } = {}) {
  const identity = validateArtifact(artifact);
  if (['tar.xz', 'zip'].includes(artifact.format) && (!python || !isAbsolute(python)))
    throw new Error('SDK archives require the absolute path to a managed Python executable');
  const directory = resolve(cache, 'artifacts', identity);
  const key = directory;
  if (pending.has(key)) return pending.get(key);
  const operation = withCacheEntryLock(cache, 'artifacts', identity, async () => {
    await mkdir(dirname(directory), { recursive: true });
    const staging = join(dirname(directory), '.install-' + identity);
    await removeOwnedStaging(staging, { log });
    try {
      await lstat(directory);
      progress?.({ stage: `Verifying cached ${label}` });
      const receipt = await verify(directory, identity, cache);
      return { directory, identity, receipt, cacheHit: true };
    } catch (error) {
      // A damaged existing cache is never silently trusted or overwritten.
      if (error.code !== 'ENOENT') throw error;
      try { await lstat(directory); throw new Error(`Incomplete managed cache: ${directory}. Run lasm cache repair and retry.`); }
      catch (missing) { if (missing.code !== 'ENOENT') throw missing; }
    }
    await checkDownloadSpace(dirname(directory), artifact.bytes);
    await createOwnedStaging(staging);
    try {
      const archive = join(staging, 'archive.' + artifact.format), tree = join(staging, 'tree');
      const downloadProgress = (receivedBytes = 0, complete = false) => progress?.({
        stage: `Downloading ${label}`, receivedBytes, totalBytes: artifact.bytes,
        download: true, cache: resolve(cache), complete,
      });
      // An installed or npm-fetched package supplies the same bytes; every source is
      // checked against the catalog's SHA-256 and size before extraction.
      const source = await acquireArtifact(artifact, archive, { label, log, progress, staging, signal, npm, env,
        downloadProgress, verify: () => verifyArchiveFile(artifact, archive),
        download: () => downloadArtifact(artifact, archive, { ...download, fetch: fetch_, update: downloadProgress, signal,
          event: event => {
            download.event?.(event);
            if (event.type === 'retry') {
              const message = `Retrying ${label} in ${Math.ceil(event.waitMs / 1000)}s (attempt ${event.attempt + 1}): ${event.detail}`;
              if (progress) progress({ stage: message }); else log(message);
            }
          } }) });
      progress?.({ stage: `Extracting ${label}` });
      await mkdir(tree);
      const extracted = new Map();
      await extract(artifact, archive, tree, python, extracted);
      progress?.({ stage: `Verifying installed ${label}` });
      const files = await inventory(tree, { extracted });
      if (!Object.keys(files).length) throw new Error('Managed artifact is empty');
      const receipt = { schema: 1, identity, artifact, source, files };
      await writeFile(join(tree, receiptName), JSON.stringify(receipt) + '\n', { flag: 'wx' });
      try {
        await rename(tree, directory);
        await recordTreeVerified(verificationRecords(cache), artifactRecordKey(identity, directory), directory);
      } catch (error) {
        if (!['EEXIST', 'ENOTEMPTY', 'EPERM', 'EACCES'].includes(error.code)) throw error;
        // Another process won the atomic installation. Verify its complete tree.
        await verify(directory, identity, cache);
      }
      progress?.({ stage: `Finishing ${label} setup` });
      return { directory, identity, receipt, cacheHit: false };
    } finally { await removeOwnedStaging(staging, { log }); }
  }, { signal, onWait: () => progress?.({ stage: `Waiting for another ${label} installation or cache repair` }) })
    .catch(error => { throw storageDiagnostic(error, cache); });
  pending.set(key, operation);
  try { return await operation; } finally { pending.delete(key); }
}

/** Record immutable build-tool derivations separately from upstream downloads. */
export async function deriveArtifact(provenance, produce, { cache = managedCacheDirectory(), log = console.error, signal, progress, cachedOnly = false } = {}) {
  const identity = digest(JSON.stringify(provenance)), directory = resolve(cache, 'derived', identity);
  if (pending.has(directory)) return pending.get(directory);
  const operation = withCacheEntryLock(cache, 'derived', identity, async () => {
    await mkdir(dirname(directory), { recursive: true });
    const staging = join(dirname(directory), '.derive-' + identity);
    await removeOwnedStaging(staging, { log });
    try {
      await lstat(directory);
      return { directory, identity, receipt: await verify(directory, identity, cache), cacheHit: true };
    } catch (error) {
      if (error.code !== 'ENOENT') throw error;
      try { await lstat(directory); throw new Error(`Incomplete derived tool cache: ${directory}`); }
      catch (missing) { if (missing.code !== 'ENOENT') throw missing; }
    }
    // cachedOnly: report instead of downloading or assembling (lasm init's editor setup).
    if (cachedOnly) throw Object.assign(new Error('Not in the tool cache yet'), { code: 'ERR_LASM_NOT_CACHED' });
    await createOwnedStaging(staging);
    try {
      const tree = join(staging, 'tree'); await mkdir(tree);
      // produce may return the hashes of files it hard-linked from verified trees.
      const known = await produce(tree);
      const files = await inventory(tree, { known: known instanceof Map ? known : undefined });
      if (!Object.keys(files).length) throw new Error('Derived tool tree is empty');
      const receipt = { schema: 1, identity, provenance, files };
      await writeFile(join(tree, receiptName), JSON.stringify(receipt) + '\n', { flag: 'wx' });
      try {
        await rename(tree, directory);
        await recordTreeVerified(verificationRecords(cache), artifactRecordKey(identity, directory), directory);
      } catch (error) {
        if (!['EEXIST', 'ENOTEMPTY', 'EPERM', 'EACCES'].includes(error.code)) throw error;
        await verify(directory, identity, cache);
      }
      return { directory, identity, receipt, cacheHit: false };
    } finally { await removeOwnedStaging(staging, { log }); }
  }, { signal, onWait: () => progress?.({ stage: 'Waiting for another tool derivation or cache repair' }) })
    .catch(error => { throw storageDiagnostic(error, cache); });
  pending.set(directory, operation);
  try { return await operation; } finally { pending.delete(directory); }
}

/** Hard-link one verified artifact tree into a prefix under assembly. */
/** Hard-link one verified artifact tree into a prefix under assembly. With
 * `known` (a Map), every file linked to its verified original is recorded with
 * the original's hash and inode, so the assembled prefix's receipt need not
 * hash it again (inventory). Links are made concurrently. */
export async function linkArtifactTree(source, receipt, destination, owners, name, kind = 'Archive', known) {
  const files = [];
  for (const [path, entry] of Object.entries(receipt.files).sort(([a], [b]) => a < b ? -1 : a > b ? 1 : 0)) {
    const target = join(destination, ...path.split('/'));
    if (entry.type === 'directory') {
      if (owners.has(path) && owners.get(path) !== 'directory') throw new Error(`${kind} ${name} conflicts at ${path}`);
      owners.set(path, 'directory');
      await mkdir(target, { recursive: true });
      continue;
    }
    if (owners.has(path)) throw new Error(`${kind}s ${owners.get(path)} and ${name} both contain ${path}`);
    owners.set(path, name);
    files.push({ path, entry, target });
  }
  // Directories come first in the receipt and were created above.
  const made = new Set();
  const linkOne = async ({ path, entry, target }) => {
    const parent = dirname(target);
    if (!made.has(parent)) { await mkdir(parent, { recursive: true }); made.add(parent); }
    if (entry.type === 'symlink') { await symlink(entry.target, target); return; }
    const from = join(source, ...path.split('/'));
    try {
      await link(from, target);
      // A hard link is the verified original itself: inventory takes its hash
      // when the size still matches.
      known?.set(path, { sha256: entry.sha256, size: BigInt(entry.bytes), linked: true });
    } catch (error) {
      if (!['EXDEV', 'EPERM', 'EACCES', 'ENOTSUP', 'EMLINK'].includes(error.code)) throw error;
      await copyFile(from, target, constants.COPYFILE_EXCL);
    }
  };
  const queue = [...files];
  await Promise.all(Array.from({ length: Math.min(32, queue.length) }, async () => { while (queue.length) await linkOne(queue.shift()); }));
}
