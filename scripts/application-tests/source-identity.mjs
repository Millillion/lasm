import { posix } from 'node:path';

// The immutable source manifest records link text separately from file bytes.
// Resolve only within that manifest, never from the current working tree.
export function sourceIdentity(sources, name) {
  const seen = new Set(), links = [];
  let target = name;
  while (true) {
    if (posix.isAbsolute(target) || target === '..' || target.startsWith('../') || seen.has(target))
      throw new Error('Invalid upstream source link: ' + name);
    seen.add(target);
    const expected = sources[target];
    if (!expected) throw new Error('Unrecorded upstream source: ' + target);
    if ('symlink' in expected) {
      if (posix.isAbsolute(expected.symlink)) throw new Error('Absolute upstream source link: ' + target);
      links.push({ source: target, symlink: expected.symlink });
      target = posix.normalize(posix.join(posix.dirname(target), expected.symlink));
    } else {
      if (!/^[a-f0-9]{64}$/.test(expected.sha256)) throw new Error('Invalid upstream source hash: ' + target);
      return { sha256: expected.sha256, target, links };
    }
  }
}
