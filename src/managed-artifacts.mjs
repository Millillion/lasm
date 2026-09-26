import { createReadStream, createWriteStream } from 'node:fs';
import { mkdir, mkdtemp, readFile, readdir, readlink, lstat, realpath, rename, rm, writeFile, symlink, link } from 'node:fs/promises';
import { dirname, join, resolve, relative, isAbsolute, posix } from 'node:path';
import { homedir } from 'node:os';
import { createHash } from 'node:crypto';
import { Readable, Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress, createGunzip } from 'node:zlib';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { x as extractTar } from 'tar';

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

async function download(artifact, destination, fetch_) {
  let response;
  try { response = await fetch_(artifact.url, { signal: AbortSignal.timeout(15 * 60_000) }); }
  catch (cause) {
    throw new Error(`Could not download ${artifact.name} from ${new URL(artifact.url).hostname}. Check your network connection and retry. ${cause.message}`, { cause });
  }
  if (!response.ok || !response.body)
    throw new Error(`Download failed for ${artifact.name}: HTTP ${response.status} from ${new URL(artifact.url).hostname}. Check your connection or retry when the download is available.`);
  if (response.url && new URL(response.url).protocol !== 'https:') throw new Error('Artifact download redirected away from HTTPS');
  const hash = createHash('sha256');
  let bytes = 0;
  const check = new Transform({ transform(chunk, encoding, callback) {
    bytes += chunk.length;
    if (bytes > artifact.bytes) return callback(new Error(`Download size mismatch: ${artifact.name}`));
    hash.update(chunk); callback(null, chunk);
  } });
  await pipeline(Readable.fromWeb(response.body), check, createWriteStream(destination, { flags: 'wx', mode: 0o600 }));
  if (bytes !== artifact.bytes || hash.digest('hex') !== artifact.sha256) throw new Error(`Download checksum or size mismatch: ${artifact.name}`);
}

function cleanArchivePath(name) {
  const parts = name.replace(/\/$/, '').split('/');
  return !!name && !/[\\:\0]/.test(name) && parts.every(part => part && part !== '.' && part !== '..');
}

async function extract(artifact, archive, directory, python) {
  // macOS /var and Windows short-path temp directories are aliases. Compare
  // resolved link targets with the same physical root, not its lexical alias.
  directory = await realpath(directory);
  let error, total = 0;
  const rootless = artifact.root === '.';
  const seen = new Set();
  const links = [];
  const unpack = extractTar({ cwd: directory, strip: rootless ? 0 : 1, strict: true, preservePaths: false, preserveOwner: false,
    filter(name, entry) {
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
      return true;
    },
  });
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

async function inventory(directory) {
  directory = await realpath(directory);
  const files = {};
  async function walk(base) {
    for (const entry of (await readdir(base, { withFileTypes: true })).sort((a, b) => a.name.localeCompare(b.name))) {
      const file = join(base, entry.name), name = relative(directory, file).split(process.platform === 'win32' ? '\\' : '/').join('/');
      if (name === receiptName) continue;
      if (entry.isDirectory()) { files[name] = { type: 'directory' }; await walk(file); }
      else if (entry.isSymbolicLink()) {
        const target = await readlink(file);
        if (isAbsolute(target) || !inside(directory, resolve(dirname(file), target)) || !inside(directory, await realpath(file)))
          throw new Error(`Managed cache link escapes its toolchain: ${name}`);
        files[name] = { type: 'symlink', target };
      } else if (entry.isFile()) {
        const stat = await lstat(file);
        files[name] = { type: 'file', bytes: stat.size, sha256: await hashFile(file),
          ...(process.platform === 'win32' ? {} : { executable: !!(stat.mode & 0o111) }) };
      } else throw new Error(`Unexpected managed cache entry: ${name}`);
    }
  }
  await walk(directory);
  return files;
}

async function verify(directory, identity) {
  if (!(await lstat(directory)).isDirectory() || !(await lstat(join(directory, receiptName))).isFile())
    throw new Error(`Managed artifact directory and receipt must not be symbolic links: ${directory}`);
  const receipt = JSON.parse(await readFile(join(directory, receiptName), 'utf8'));
  if (receipt.schema !== 1 || receipt.identity !== identity || !receipt.files || !Object.keys(receipt.files).length)
    throw new Error('Managed artifact receipt does not match the requested toolchain');
  const observed = await inventory(directory);
  if (JSON.stringify(observed) !== JSON.stringify(receipt.files)) {
    const changed = [...new Set([...Object.keys(receipt.files), ...Object.keys(observed)])]
      .filter(name => JSON.stringify(observed[name]) !== JSON.stringify(receipt.files[name]));
    throw new Error(`Managed cache contents changed: ${directory}. Changed entries (${changed.length}): ` +
      changed.slice(0, 10).map(name => JSON.stringify(name)).join(', ') +
      (changed.length > 10 ? ', ...' : '') + '. Remove this toolchain directory to download a verified replacement.');
  }
  return receipt;
}

/** Install into a private staging directory; expose only a verified complete tree.
 * Concurrent processes may download twice but can never observe partial output.
 * No cache lock can be left behind by an interrupted process.
 */
export async function provisionArtifact(artifact, { cache = managedCacheDirectory(), fetch: fetch_ = fetch, log = console.error, python } = {}) {
  const identity = validateArtifact(artifact);
  if (['tar.xz', 'zip'].includes(artifact.format) && (!python || !isAbsolute(python)))
    throw new Error('SDK archives require the absolute path to a managed Python executable');
  const directory = resolve(cache, 'artifacts', identity);
  const key = directory;
  if (pending.has(key)) return pending.get(key);
  const operation = (async () => {
    try {
      await lstat(directory);
      const receipt = await verify(directory, identity);
      return { directory, identity, receipt, cacheHit: true };
    } catch (error) {
      // A damaged existing cache is never silently trusted or overwritten.
      if (error.code !== 'ENOENT') throw error;
      try { await lstat(directory); throw new Error(`Incomplete managed cache: ${directory}. Remove this toolchain directory and retry.`); }
      catch (missing) { if (missing.code !== 'ENOENT') throw missing; }
    }
    await mkdir(dirname(directory), { recursive: true });
    const staging = await mkdtemp(join(dirname(directory), '.install-'));
    let failure;
    try {
      const archive = join(staging, 'archive.' + artifact.format), tree = join(staging, 'tree');
      log(`Downloading verified ${artifact.name}…`);
      await download(artifact, archive, fetch_);
      await mkdir(tree);
      await extract(artifact, archive, tree, python);
      const files = await inventory(tree);
      if (!Object.keys(files).length) throw new Error('Managed artifact is empty');
      const receipt = { schema: 1, identity, artifact, files };
      await writeFile(join(tree, receiptName), JSON.stringify(receipt) + '\n', { flag: 'wx' });
      try { await rename(tree, directory); }
      catch (error) {
        if (!['EEXIST', 'ENOTEMPTY', 'EPERM', 'EACCES'].includes(error.code)) throw error;
        // Another process won the atomic installation. Verify its complete tree.
        await verify(directory, identity);
      }
      return { directory, identity, receipt, cacheHit: false };
    } catch (error) { failure = error; throw error; }
    finally {
      try { await rm(staging, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }); }
      catch (cleanup) {
        if (failure) throw new AggregateError([failure, cleanup], `Artifact installation failed: ${failure.message}; cleanup also failed: ${cleanup.message}`);
        throw cleanup;
      }
    }
  })();
  pending.set(key, operation);
  try { return await operation; } finally { pending.delete(key); }
}

/** Record immutable build-tool derivations separately from upstream downloads. */
export async function deriveArtifact(provenance, produce, { cache = managedCacheDirectory() } = {}) {
  const identity = digest(JSON.stringify(provenance)), directory = resolve(cache, 'derived', identity);
  if (pending.has(directory)) return pending.get(directory);
  const operation = (async () => {
    try {
      await lstat(directory);
      return { directory, identity, receipt: await verify(directory, identity), cacheHit: true };
    } catch (error) {
      if (error.code !== 'ENOENT') throw error;
      try { await lstat(directory); throw new Error(`Incomplete derived tool cache: ${directory}`); }
      catch (missing) { if (missing.code !== 'ENOENT') throw missing; }
    }
    await mkdir(dirname(directory), { recursive: true });
    const staging = await mkdtemp(join(dirname(directory), '.derive-'));
    try {
      const tree = join(staging, 'tree'); await mkdir(tree);
      await produce(tree);
      const files = await inventory(tree);
      if (!Object.keys(files).length) throw new Error('Derived tool tree is empty');
      const receipt = { schema: 1, identity, provenance, files };
      await writeFile(join(tree, receiptName), JSON.stringify(receipt) + '\n', { flag: 'wx' });
      try { await rename(tree, directory); }
      catch (error) {
        if (!['EEXIST', 'ENOTEMPTY', 'EPERM', 'EACCES'].includes(error.code)) throw error;
        await verify(directory, identity);
      }
      return { directory, identity, receipt, cacheHit: false };
    } finally { await rm(staging, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }); }
  })();
  pending.set(directory, operation);
  try { return await operation; } finally { pending.delete(directory); }
}
