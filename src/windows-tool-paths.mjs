import { mkdir, symlink, realpath, lstat } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';

/** A stable short junction for native tools which still impose MAX_PATH.
 * Tool files stay in their verified, versioned cache; the junction contains no
 * copied tool data and needs neither administrator rights nor Developer Mode.
 */
export async function windowsToolPrefix(directory, { temporaryDirectory = tmpdir() } = {}) {
  const target = await realpath(directory);
  const parent = join(temporaryDirectory, 'lasm-tools');
  await mkdir(parent, { recursive: true, mode: 0o700 });
  const key = createHash('sha256').update(target).digest('hex').slice(0, 24);
  const prefix = join(parent, key);
  try { await symlink(target, prefix, 'junction'); }
  catch (error) { if (error.code !== 'EEXIST') throw error; }
  // Never silently repoint an existing path. Verify its target after creation
  // as well, so simultaneous requests can safely reuse the same junction.
  if (!(await lstat(prefix)).isSymbolicLink() || await realpath(prefix) !== target)
    throw new Error(`Managed compiler junction changed: ${prefix}. Remove this junction and retry.`);
  return prefix;
}
