import { copyFile, mkdir, readFile, readdir, realpath, stat, writeFile } from 'node:fs/promises';
import { join, dirname, relative } from 'node:path';
import { createHash } from 'node:crypto';
import { hashFile } from './managed-artifacts.mjs';

// Current Lean loads module IR only when its companion signature file exists.
const metadataFile = /\.(?:olean(?:\.private|\.server)?|ir(?:\.sig)?|ilean)$/;

/** Lean's environment/import APIs need their ordinary module data at runtime. */
export async function applicationMetadata(generated, lean) {
  let required = false;
  for (const file of generated.sources) {
    // Generated C declares imported module initializers even when every ordinary
    // definition in that module is inlined. Inspect the compiler's dependency
    // output, rather than parsing Lean source or asking for a Lasm annotation.
    if (/\binitialize_(?:Lean|Lake)(?:_|\s*\()/.test(await readFile(file, 'utf8'))) {
      required = true; break;
    }
  }
  if (!required) return null;
  const files = [], roots = [], seenRoots = new Set();
  async function collect(directory, destination, optional = false) {
    let physical;
    try { physical = await realpath(directory); }
    catch (error) { if (optional && error.code === 'ENOENT') return false; throw error; }
    if (seenRoots.has(physical)) return false;
    seenRoots.add(physical);
    async function walk(base, ancestors) {
      const canonical = await realpath(base);
      if (ancestors.has(canonical)) throw new Error('Cyclic runtime module-data directory: ' + base);
      const next = new Set(ancestors).add(canonical);
      for (const entry of (await readdir(base)).sort()) {
        const source = join(base, entry), info = await stat(source);
        if (info.isDirectory()) { await walk(source, next); continue; }
        if (!metadataFile.test(entry)) continue;
        if (!info.isFile()) throw new Error('Runtime module data is not an ordinary file: ' + source);
        files.push({ source, path: join(destination, relative(directory, source)).replaceAll('\\', '/'),
          bytes: info.size, sha256: await hashFile(source) });
      }
    }
    await walk(directory, new Set()); return true;
  }
  const standard = join(lean.prefix, 'lib/lean');
  await collect(standard, 'lib/lean');
  if (!files.some(file => file.path === 'lib/lean/Init.olean'))
    throw new Error('The managed Lean toolchain is missing its standard module data');
  for (const directory of generated.metadataRoots) {
    const destination = 'packages/' + roots.length;
    if (await collect(directory, destination, true)) roots.push(destination);
  }
  const inventory = files.map(({ source, ...file }) => file);
  const manifest = { schema: 1, lean: lean.version, leanCommit: lean.commit, roots,
    files: inventory, bytes: inventory.reduce((total, file) => total + file.bytes, 0) };
  return { files, manifest, identity: createHash('sha256').update(JSON.stringify(manifest)).digest('hex') };
}

/** Materialize data, including linked build artifacts, without build-path links. */
export async function copyApplicationMetadata(metadata, output) {
  if (!metadata) return;
  const root = join(output, 'lean');
  for (const file of metadata.files) {
    const destination = join(root, file.path);
    await mkdir(dirname(destination), { recursive: true });
    await copyFile(file.source, destination);
    if (await hashFile(destination) !== file.sha256)
      throw new Error('Runtime module data changed during the build: ' + file.source);
  }
  // An empty library directory is still a real search-path entry.
  for (const name of metadata.manifest.roots) await mkdir(join(root, name), { recursive: true });
  await writeFile(join(root, 'metadata.json'), JSON.stringify(metadata.manifest) + '\n');
}
