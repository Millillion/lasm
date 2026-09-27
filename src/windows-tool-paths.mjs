import { mkdir, mkdtemp, symlink, realpath, lstat, readdir, readFile, writeFile, link, copyFile, rename, rm } from 'node:fs/promises';
import { constants } from 'node:fs';
import { join, dirname } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { hashFile } from './managed-artifacts.mjs';

const marker = '.lasm-tool-prefix.json';
const pending = new Map();

/** A short physical bin directory for Lean's realPath(appDir) lookup.
 * Immutable bin files use hard links, with copies across volumes. Large library
 * and source directories remain junctions to the already verified tool cache.
 */
export async function windowsToolPrefix(directory, { receipt, temporaryDirectory = tmpdir() } = {}) {
  if (!receipt?.identity || !receipt.files) throw new Error('A verified Lean artifact receipt is required');
  const target = await realpath(directory);
  const parent = join(temporaryDirectory, 'lasm-tools');
  await mkdir(parent, { recursive: true, mode: 0o700 });
  const provenance = { schema: 2, target, artifact: receipt.identity };
  const key = createHash('sha256').update(JSON.stringify(provenance)).digest('hex').slice(0, 24);
  const prefix = join(parent, key);
  if (pending.has(prefix)) return pending.get(prefix);
  const operation = (async () => {
    const rootEntries = Object.entries(receipt.files).filter(([name]) => !name.includes('/'));
    if (!rootEntries.some(([name, entry]) => name === 'bin' && entry.type === 'directory'))
      throw new Error('Managed Lean has no ordinary bin directory');
    const binEntries = Object.entries(receipt.files).filter(([name]) => name.startsWith('bin/')).sort();
    const changed = () => new Error(`Managed compiler execution files changed: ${prefix}. Remove this temporary directory and retry.`);
    async function fileMatches(file, entry) {
      const stat = await lstat(file);
      return stat.isFile() && stat.size === entry.bytes && await hashFile(file) === entry.sha256;
    }
    async function verify(path) {
      if (!(await lstat(path)).isDirectory()) throw changed();
      const description = await lstat(join(path, marker));
      if (!description.isFile() || description.size > 8192) throw changed();
      if (JSON.stringify(JSON.parse(await readFile(join(path, marker), 'utf8'))) !== JSON.stringify(provenance)) throw changed();
      const expected = [marker, ...rootEntries.map(([name]) => name)].sort();
      if (JSON.stringify((await readdir(path)).sort()) !== JSON.stringify(expected)) throw changed();
      for (const [name, entry] of rootEntries) {
        const file = join(path, name), stat = await lstat(file);
        if (name === 'bin') { if (!stat.isDirectory()) throw changed(); }
        else if (entry.type === 'directory') {
          if (!stat.isSymbolicLink() || await realpath(file) !== await realpath(join(target, name))) throw changed();
        } else if (entry.type !== 'file' || !await fileMatches(file, entry)) throw changed();
      }
      const found = [];
      async function walk(base, relative) {
        for (const name of await readdir(base)) {
          const child = join(base, name), key = relative + '/' + name;
          found.push(key);
          if ((await lstat(child)).isDirectory()) await walk(child, key);
        }
      }
      await walk(join(path, 'bin'), 'bin');
      if (JSON.stringify(found.sort()) !== JSON.stringify(binEntries.map(([name]) => name).sort())) throw changed();
      for (const [name, entry] of binEntries) {
        const file = join(path, name);
        if (entry.type === 'directory') { if (!(await lstat(file)).isDirectory()) throw changed(); }
        else if (entry.type !== 'file' || !await fileMatches(file, entry)) throw changed();
      }
    }
    try {
      await lstat(prefix);
      try { await verify(prefix); } catch (cause) { throw new Error(changed().message, { cause }); }
      return prefix;
    } catch (error) { if (error.code !== 'ENOENT') throw error; }
    const staging = await mkdtemp(join(parent, '.prepare-'));
    async function shareFile(name, entry) {
      if (entry.type !== 'file') throw new Error(`Unsupported managed Lean bin entry: ${name}`);
      const source = join(target, name), destination = join(staging, name);
      await mkdir(dirname(destination), { recursive: true });
      try { await link(source, destination); }
      catch (error) {
        if (!['EXDEV', 'EPERM', 'EACCES', 'ENOTSUP'].includes(error.code)) throw error;
        await copyFile(source, destination, constants.COPYFILE_EXCL);
      }
    }
    try {
      for (const [name, entry] of rootEntries) {
        if (name === 'bin') await mkdir(join(staging, name));
        else if (entry.type === 'directory') await symlink(join(target, name), join(staging, name), 'junction');
        else await shareFile(name, entry);
      }
      for (const [name, entry] of binEntries) {
        if (entry.type === 'directory') await mkdir(join(staging, name), { recursive: true });
        else await shareFile(name, entry);
      }
      await writeFile(join(staging, marker), JSON.stringify(provenance) + '\n', { flag: 'wx' });
      await verify(staging);
      try { await rename(staging, prefix); }
      catch (error) {
        if (!['EEXIST', 'ENOTEMPTY', 'EPERM', 'EACCES'].includes(error.code)) throw error;
        await verify(prefix);
      }
      return prefix;
    } finally { await rm(staging, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }); }
  })();
  pending.set(prefix, operation);
  try { return await operation; } finally { pending.delete(prefix); }
}
