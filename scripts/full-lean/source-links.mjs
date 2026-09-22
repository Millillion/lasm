import { lstatSync, readFileSync, readlinkSync } from 'node:fs';
import { join } from 'node:path';

const inventory = JSON.parse(readFileSync(new URL('./upstream-source-links.json', import.meta.url)));

export function originalSourceLinks(manifest) {
  // Private harness controls have no Lean release inputs.
  if (manifest.leanCommit === undefined && manifest.archiveSha256 === undefined) return {};
  if (manifest.leanCommit !== inventory.leanCommit || manifest.archiveSha256 !== inventory.archiveSha256)
    throw new Error('Unsupported upstream source-link inventory');
  return inventory.links;
}

export function verifySourceLinks(source, links) {
  const modified = [];
  for (const [name, target] of Object.entries(links)) {
    try {
      const path = join(source, name);
      if (!lstatSync(path).isSymbolicLink() || readlinkSync(path) !== target) modified.push(name);
    } catch (error) {
      if (error.code !== 'ENOENT' && error.code !== 'ENOTDIR') throw error;
      modified.push(name);
    }
  }
  return { checked: Object.keys(links).length, modified };
}
