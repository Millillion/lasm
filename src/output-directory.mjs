// Moving a finished output into place (browser, edge and WASI builds). A
// rebuild that produced exactly the files already there leaves them alone, so
// an unchanged build rewrites nothing: file times stay, and watchers, live
// reload and mtime-based caches see no change (claim 4, docs/TESTING.md#metamorphic-build-tests).
import { existsSync, lstatSync, mkdirSync, readFileSync, readdirSync, renameSync, rmSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';

/** Whether every file of `staging` is in `destination` with the same bytes and
 * `destination` has no other file, except top-level files `regenerated(name)`
 * accepts (written after the move, for example an edge entry module). */
export function sameOutputTree(staging, destination, regenerated = () => false) {
  const walk = (a, b, top) => {
    let names, others;
    try { names = readdirSync(a).sort(); others = readdirSync(b).sort(); } catch { return false; }
    const extra = others.filter(name => !names.includes(name));
    if (extra.some(name => !top || !regenerated(name) || !lstatSync(join(b, name)).isFile())) return false;
    for (const name of names) {
      const x = lstatSync(join(a, name)), y = existsSync(join(b, name)) && lstatSync(join(b, name));
      if (!y || x.isDirectory() !== y.isDirectory() || x.isSymbolicLink() || y.isSymbolicLink()) return false;
      if (x.isDirectory()) { if (!walk(join(a, name), join(b, name), false)) return false; }
      else if (x.size !== y.size || !readFileSync(join(a, name)).equals(readFileSync(join(b, name)))) return false;
    }
    return true;
  };
  return existsSync(destination) && lstatSync(destination).isDirectory() && walk(staging, destination, true);
}

/** Replaces `destination` with `staging`, or keeps it when nothing changed.
 * Returns true when the output was replaced. */
export function replaceOutputDirectory(staging, destination, { regenerated } = {}) {
  if (sameOutputTree(staging, destination, regenerated)) { rmSync(staging, { recursive: true, force: true }); return false; }
  rmSync(destination, { recursive: true, force: true });
  mkdirSync(dirname(destination), { recursive: true });
  renameSync(staging, destination);
  return true;
}

/** writeFileSync, skipped when the file already has exactly these bytes. */
export function writeFileIfChanged(path, data) {
  const bytes = Buffer.isBuffer(data) ? data : Buffer.from(data);
  try { if (readFileSync(path).equals(bytes)) return false; } catch { /* missing: write it */ }
  writeFileSync(path, bytes);
  return true;
}

/** The error for an existing `destination` that is not an earlier build of
 * this kind, which Lasm does not replace. Until 0.5.0, --output with a
 * platform target named the intermediate Node build: say so when it is one. */
export function foreignOutputError(destination, kind) {
  let node = false;
  try { node = JSON.parse(readFileSync(join(destination, 'build-info.json'), 'utf8')).target === 'node'; } catch { /* not a Node build */ }
  return new Error(`${destination} exists and is not a Lasm ${kind} build; remove it, or choose another --output`
    + (node ? '. It holds a Lasm Node build: since Lasm 0.5.0, --output with this target names the deployable directory, and the Node build stays in the build cache' : ''));
}
