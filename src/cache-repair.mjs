import { lstat, readdir, rename } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { managedCacheDirectory, verifyArtifactDirectory } from './managed-artifacts.mjs';
import { withCacheLease, removeOwnedStaging, storageDiagnostic } from './cache-lifecycle.mjs';
import { windowsToolPrefix } from './windows-tool-paths.mjs';

/** Explicit offline repair. Only the reserved immutable namespaces are touched;
 * no project outputs, SDK mutable state, valid tools or lock files are deleted.
 * The exclusive lease refuses concurrent builds rather than aging out owners.
 */
export async function repairManagedCache({ cache = managedCacheDirectory(), log = console.error, progress } = {}) {
  cache = resolve(cache);
  const result = { cache, verified: [], removed: [], stagingRemoved: [], skipped: [], pending: [] };
  const cleanup = async path => {
    if (await removeOwnedStaging(path, { log })) result.stagingRemoved.push(path);
    else result.pending.push(path);
  };
  try {
    return await withCacheLease(cache, async () => {
      for (const kind of ['artifacts', 'derived']) {
        const parent = join(cache, kind);
        let entries;
        try {
          if (!(await lstat(parent)).isDirectory()) throw new Error(`Cache namespace must be an ordinary directory: ${parent}`);
          entries = await readdir(parent, { withFileTypes: true });
        } catch (error) { if (error.code === 'ENOENT') continue; throw error; }
        for (const entry of entries) {
          const path = join(parent, entry.name);
          if (new RegExp(`^\\.${kind === 'artifacts' ? 'install' : 'derive'}-[a-f0-9]{64}$`).test(entry.name)
              || /^\.repair-[a-f0-9]{64}$/.test(entry.name)) { await cleanup(path); continue; }
          if (!/^[a-f0-9]{64}$/.test(entry.name) || !entry.isDirectory()) { result.skipped.push(path); continue; }
          progress?.({ stage: `Verifying ${kind}/${entry.name.slice(0, 12)} for cache repair` });
          let receipt;
          try { receipt = await verifyArtifactDirectory(path, entry.name); }
          catch (error) {
            if (['EACCES', 'EPERM', 'ENOSPC', 'EDQUOT', 'EROFS', 'EIO'].includes(error.code)) throw error;
            const quarantine = join(parent, '.repair-' + entry.name);
            if (!await removeOwnedStaging(quarantine, { log })) { result.pending.push(quarantine); continue; }
            await rename(path, quarantine);
            result.removed.push({ directory: path, reason: error.message });
            log(`[lasm] Removed invalid cached tool ${path}; the next build downloads or derives its verified replacement.`);
            await cleanup(quarantine);
            continue;
          }
          result.verified.push(path);
          if (process.platform === 'win32' && kind === 'artifacts' && receipt.files['bin/lean.exe'] && receipt.files['bin/lake.exe'])
            await windowsToolPrefix(path, { receipt, repair: true, log, progress });
        }
      }
      return result;
    }, { exclusive: true, tryOnly: true });
  } catch (error) { throw storageDiagnostic(error, cache); }
}
